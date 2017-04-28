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
			std::string returnList = "rivestment try";
			extern std::map<lospi::Md5Digest, std::string> hashMap;
			//split text into challenge list        
			while (std::getline(ss, str, L' '))
			{
				challenge_list.push_back(get_md5_from_str(str));
				//challenge list contains what will be compared to the hash map.
			}
			for (const auto& cli : challenge_list) //Loop through the challenge list and compare to the hashMap to find any matches.
			{
				auto it = hashMap.find(cli);
				if (it != hashMap.end())
				{
					answer_list.push_back(it->second); //If a match has been found then add the match to the answer list.
					challenge_list.pop_back(); //Remove the found match from the challenge list.
				}
			}

			for (const auto& answer : answer_list) //Append answers to the list to give to rivestment separated by a space.
			{
				returnList.append(" ");
				returnList.append(answer + "fzqaqq");
			}
			bot->post_message(string_to_wstring(returnList)); //Return the list to rivestment.
			_sleep(1200);
			return L"rivestment challenge 100"; //Ask for more challenges.

		}
		private:
		std::shared_ptr<Matterbot> bot;
	};
}