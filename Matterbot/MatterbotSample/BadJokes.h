#pragma once
#include "Matterbot.h"

namespace lospi
{
	struct JokeCommand : ICommand {
		std::wstring get_name() override {
			return L"joke";
		}

		std::wstring get_help() override {
			return L"`joke`: A joke will be told. Quality is not guaranteed.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			if (user == L"lewisbivins")
			{
				srand(time(NULL));
				std::wstring jokeBank[15] = {
					L"A neutron walks into a bar and asks the bartender, How much for a drink? The bartender replies, For you, no charge.",
					L"What did the red light say to the green light? Don't look, I'm changing!",
					L"What do you call a bear without any teeth? A gummy bear?",
					L"How do dinosaurs pay their bills? With Tyrannosaurus Checks.",
					L"What do ducks wear to weddings? Duxedos.",  //Joke 5
					L"What do you call a guy with a rubber toe? Roberto.",
					L"Why should you not write with a dull pencil? It's pointless.",
					L"Why can't zoo animals take tests? Too many cheetahs.",
					L"What do you call a singing computer? A Dell.",
					L"Where do cows go for the first date? To the Moo-vies." //Joke 10
				};

				int i = rand() % 15;
				return jokeBank[i];
			}
			else
			{
				return L"Humor module disengaged. Contact tech support at 1-800-NO-JOKES-4U.";
			}
		}
	};
}
