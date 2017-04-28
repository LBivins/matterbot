#include "Matterbot.h"
#include <map>
#include <vector>
#include <sstream>
#include <iostream>
#include "ConsoleLogger.h"
#include "EchoCommand.h"
#include "SleepCommand.h"
#include "BadJokes.h"
#include "WeatherCommand.h"
#include "ReverseCommand.h"
#include "AutomotiveCommand.h"
#include "ComputeHash.h"
#include "SetLevel.h"
#include "Challenges.h"

#define ERROR_SUCCESS 0
#define ERROR_FAILURE -1

using namespace std;
using namespace lospi;
map<Md5Digest, string> hashMap;

int main() {
	wstring mattermost_url = L"https://hooks.slack.com",
		incoming_hook_route = L"services/T4Z1QAKSS/B501SSEM8/ImxXieRvfFn0uxqwlh6IgAlb",
		outgoing_hook_route = L"http://127.0.0.1:8765/",
		outgoing_hook_token = L"cYP3npMhwQzkzzbon6V94k92",
		welcome_message = L"bot is running.";

	try {
		auto bot = make_shared<Matterbot>(mattermost_url, incoming_hook_route, outgoing_hook_route, outgoing_hook_token);
		bot->set_logger(make_unique<ConsoleLogger>());
		bot->register_command(make_shared<EchoCommand>());
		bot->register_command(make_shared<JokeCommand>());
		bot->register_command(make_shared<SleepCommand>());
		bot->register_command(make_shared<LevelCommand>(bot));
		bot->register_command(make_shared<ChallengeCommand>(bot));
		bot->register_command(make_shared<ComputeHashCommand>());
		bot->register_command(make_shared<AutomotiveCommand>());
		bot->register_command(make_shared<WeatherCommand>());
		bot->register_command(make_shared<ReverseCommand>(bot));
		bot->post_message(welcome_message);

		string password = "fzqaqq";
		hashMap.emplace(
			compute_md5(password.c_str(),
				password.size()), password
		);
		for (auto i = 1; i < 14; i++)
		{
			//Contruct the Combinator.
			auto combinator = Combinator("hsoj", i);
			string temp = "";
			//Generate Look-Up Table
			while (combinator.has_next())
			{
				auto combo = combinator.next();
				for (int j = 0; j < combo.size(); j++)
				{
					temp.append(1, combo[j]);
				}
				//Generate MD5 Digest
				auto md5 = compute_md5((temp + password).c_str(), temp.size() + password.size());
				//Map insertion
				hashMap.emplace(md5, temp);
				temp.clear();
			}
		}

		wstring console;
		wclog << ">> Type \'quit\' to quit. Any other input will be sent to the bot." << endl;
		while (getline(wcin, console)) {
			if (L"quit" == console) {
				wclog << ">> Quitting." << endl;
				return ERROR_SUCCESS;
			}
			if (L"" != console) { bot->post_message(console); }
		}
	}
	catch (exception e) {
		wcerr << "[-] Unhandled exception:" << e.what() << endl;
		return ERROR_FAILURE;
	}
}
