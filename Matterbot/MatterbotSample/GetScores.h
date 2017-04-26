#pragma once
#include "Matterbot.h"
#include <winsock.h>

namespace lospi
{
	struct GetScoresCommand : ICommand {
		std::wstring get_name() override {
			return L"score";
		}
		//DECLARE_STDCALL_P(struct hostent *) gethostbyname(const char*);
		std::wstring get_help() override {
			return L"`score`: The bot will fetch the latest NBA scores from yesterday/today.";
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
