#pragma once
#include "Matterbot.h"

namespace lospi
{
	struct WeatherCommand : ICommand {
		WeatherCommand() {
			is_raining = true;
		}
		std::wstring get_name() override {
			return L"weather";
		}

		std::wstring get_help() override {
			return L"`weather [CMD]`:\n`weather rain`: Make it rain\n`weather sunny`:Make it sunny\n`weather report`: Print the status";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			if (command_text == L"sunny") 
			{
				is_raining = false;
				return L"It's now sunny.";
				//make it sunny
			} 
			else if (command_text == L"rain") 
			{
				is_raining = true;
				return L"It's now raining.";
				//make it rain
			} 
			else if (command_text == L"report") 
			{
				if (!is_raining)
				{
					return L"Get your umbrella!";
				}
				else
				{
					return L"Report to the beach for Mandatory Fun.";
				}
				//return status
			} 
			else 
			{
				return L"No.";
			}
			return command_text;
		}
	private:
		bool is_raining;
	};
}
