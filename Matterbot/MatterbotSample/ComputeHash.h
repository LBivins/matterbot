#pragma once
#include "Matterbot.h"
#include "Md5Utilities.h"
#include <string>
#include <algorithm>

namespace lospi 
{
	struct ComputeHashCommand : ICommand {
		std::wstring get_name() override {
			return L"#";
		}

		std::wstring get_help() override {
			return L"`#` [PASSWORD]: # will calculate the hash of the given password.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			if (user == L"lewisbivins")
			{
				std::string commandText = wstring_to_string(command_text);
				const char * data = commandText.c_str();
				unsigned long textLength = commandText.size();
				return get_str_from_md5(compute_md5(data, textLength));
			}
			else
			{
				return L"That's my purse, I don't know you!";
			}
		}
	};
}
