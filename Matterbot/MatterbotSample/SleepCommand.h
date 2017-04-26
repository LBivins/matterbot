#pragma once
#include "Matterbot.h"

namespace lospi
{
	struct SleepCommand : ICommand {
		std::wstring get_name() override {
			return L"sleep";
		}

		std::wstring get_help() override {
			return L"`sleep`: The bot will sleep.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			if (user == L"lewisbivins")
			{
				return L"zZzZzZzZzZZzZzZz";
			}
			else
			{
				return L"You have no power here.";
			}
		}
	};
}
