#pragma once
#include "Matterbot.h"

namespace lospi
{
	struct LevelCommand : ICommand {
		explicit LevelCommand(std::shared_ptr<Matterbot> bot) : bot{ bot } { }
		std::wstring get_name() override {
			return L"level";
		}

		std::wstring get_help() override {
			return L"`level`: The bot will set the rivestment level.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			if (user == L"lewisbivins")
			{
				bot->post_message(L"rivestment level " + command_text);
			}
			else
			{
				return L"You have no power here.";
			}
		}
	private:
		std::shared_ptr<Matterbot> bot;
	};
}
