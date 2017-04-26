#pragma once
#include "Matterbot.h"
#include "Md5Utilities.h"
#include <string>
#include <algorithm>
#include <map>
#include <stdlib.h>

namespace lospi
{
	struct ChallengeCommand : ICommand {
		explicit ChallengeCommand(std::shared_ptr<Matterbot> bot) : bot{ bot } { }
		int i = 0;

		std::wstring get_name() override {
			return L"challenges";
		}

		std::wstring get_help() override {
			return L"`challenges`: Initiates calls to Rivestment.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {

			std::wstring hashes = command_text;
			std::vector<Md5Digest> challenge_list;
			std::vector<std::string> answer_list;
			std::wstringstream ss(hashes);
			std::wstring str;
			std::wstring rivestment;
			//split text into challenge list        
			while (std::getline(ss, str, L' '))
			{
				challenge_list.push_back(get_md5_from_str(str));
				//challenge list contains what will be compared to the hash map.
			}
			for (const auto& cli : challenge_list)
			{
				auto it = hashMap.find(cli);
				if (it != hashMap.end())
				{
					answer_list.push_back(it->second);
				}
			}
			bot->post_message(L"rivestment try ");

			return;
		}
		private:
		std::shared_ptr<Matterbot> bot;
	};
}