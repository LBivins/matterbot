#pragma once
#include "Matterbot.h"

namespace lospi
{
	struct AutomotiveCommand : ICommand {
		std::wstring get_name() override {
			return L"automotive";
		}

		std::wstring get_help() override {
			return L"`automotive [Make]`: `automotive` will respond with the make's owner and headquarters.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			if (command_text == L"Acura")
			{
				return L"Owner: Honda, Headquarters: Minato, Tokyo, Japan";
			}
			else if (command_text == L"Alfa_Romeo")
			{
				return L"Owner: Fiat Chrysler, Headquarters: Turin, Italy";
			}
			else if (command_text == L"Aston Martin")
			{
				return L"Owner: Aston Martin, Headquarters: Gaydon, Warwickshire, England, United Kingdom";
			}
			else if (command_text == L"Audi")
			{
				return L"Owner: Volkswagen Group, Headquarters: Ingolstadt, Germany";
			}
			else if (command_text == L"Bentley")
			{
				return L"Owner: Volkswagen Group, Headquarters: Crewe, England, United Kingdom";
			}
			else if (command_text == L"Bugatti")
			{
				return L"Owner: Volkswagen, Headquarters: Molsheim, Alsace, France";
			}
			else if (command_text == L"Buick")
			{
				return L"Owner: General Motors, Headquarters: Detroit, Michigan";
			}
			else if (command_text == L"Cadillac")
			{
				return L"Owner: General Motors, Headquarters: New York City, New York";
			}
			else if (command_text == L"Chevrolet")
			{
				return L"Owner: General Motors, Headquarters: Detroit, Michigan";
			}
			else if (command_text == L"Chrysler")
			{
				return L"Owner: Fiat Chrysler, Headquarters: Auburn Hills, Michigan";
			}
			else if (command_text == L"Datsun")
			{
				return L"Owner: Nissan, Headquarters: Tokyo, Japan";
			}
			else if (command_text == L"Dodge")
			{
				return L"Owner: Fiat Chrysler, Headquarters: Auburn Hills, Michigan";
			}
			else if (command_text == L"Ferrari")
			{
				return L"Owner: Exor N.V., Piero Ferrari, General Public, Headquarters: Amsterdam, the Netherlands (legal), Maranello, Italy(de facto)";
			}
			else if (command_text == L"Fiat")
			{
				return L"Owner: Fiat Chrysler, Headquarters: Turin, Italy";
			}
			else if (command_text == L"Ford")
			{
				return L"Owner: The Vanguard Group, Evercore Wealth Management, Ford Family, Headquarters: Dearborn, Michigan";
			}
			else if (command_text == L"GMC")
			{
				return L"Owner: General Motors, Headquarters: Detroit, Michigan";
			}
			else if (command_text == L"Honda")
			{
				return L"Owner: Japan Trustee Services Bank, The Master Trust Bank of Japan, Mokusurei, Meiji Yasuda Life, sTokio Marine Nichido, Headquarters: Minato, Tokyo, Japan";
			}
			else if (command_text == L"Hummer")
			{
				return L"Owner: General Motors, Headquarters: Detroit, Michigan";
			}
			else if (command_text == L"Hyundai")
			{
				return L"Owner: Hyundai Motor Group, Headquarters: Seoul, South Korea";
			}
			else if (command_text == L"Infiniti")
			{
				return L"Owner: Nissan, Headquarters: Hopewell Centre, Wan Chai, Hong Kong";
			}
			else if (command_text == L"Jaguar")
			{
				return L"Owner: Jaguar Land Rover, Headquarters: Whitley, Coventry, United Kingdom";
			}
			else if (command_text == L"Jeep")
			{
				return L"Owner:Fiat Chrysler, Headquarters: Toledo, Ohio";
			}
			else if (command_text == L"Kia")
			{
				return L"Owner: Hyundai Motor Group, Headquarters: Seoul, South Korea";
			}
			else if (command_text == L"Konigsegg")
			{
				return L"Owner: Christian von Koenigsegg, Headquarters: Angelholm, Scania, Sweden";
			}
			else if (command_text == L"Lamborghini")
			{
				return L"Owner: Audi, Headquarters: Sant'Agata Bolognese, Italy";
			}
			else if (command_text == L"Land Rover")
			{
				return L"Owner: Jaguar Land Rover, Headquarters: Whitley, Coventry, United Kingdom";
			}
			else if (command_text == L"Lexus")
			{
				return L"Owner: Toyota, Headquarters: Nagoya, Japan";
			}
			else if (command_text == L"Lincoln")
			{
				return L"Owner: Ford Motor Company, Headquarters: Dearborn, Michigan";
			}
			else if (command_text == L"Lotus")
			{
				return L"Owner: Proton Holdings Berhold, Headquarters: Hethel, Norfolk, England";
			}
			else if (command_text == L"Maserati")
			{
				return L"Owner: Fiat Chrysler, Headquarters: Modena, Italy";
			}
			else if (command_text == L"Mazda")
			{
				return L"Owner:Japan Trustee Services Bank, The Master Trust Bank of Japan,	Sumitomo Mitsui Banking Corporation, Headquarters: Shinchi, Fuchu, Aki, Hiroshima, Japan";
			}
			else if (command_text == L"Mercedes-Benz")
			{
				return L"Owner: Daimler AG, Headquarters: Stuttgart, Germany";
			}
			else if (command_text == L"Mercury")
			{
				return L"DEFUNCT AS OF 2011 Owner: Ford Motor Company, Headquarters: Dearborn, Michigan";
			}
			else if (command_text == L"Mitsubishi")
			{
				return L"Owner: The Bank of Tokyo-Mitsubishi UFJ, Mitsubishi Corporation, Mitsubishi Heavy Industries, Headquarters: Tokyo, Japan";
			}
			else if (command_text == L"Nissan")
			{
				return L"Owner: Renault, Headquarters: Nishi - ku, Yokohama, Japan";
			}
			else if (command_text == L"Oldsmobile")
			{
				return L"Owner: General Motors, Headquarters: Lansing, Michigan";
			}
			else if (command_text == L"Peugeot")
			{
				return L"Owner: Groupe PSA, Headquarters: Ave de la Grande Armée, Paris";
			}
			else if (command_text == L"Plymouth")
			{
				return L"DEFUNCT AS OF 2001 Owner: Daimler Chrysler, Headquarters: Auburn Hills, Michigan";
			}
			else if (command_text == L"Pontiac")
			{
				return L"DEFUNCT AS OF 2010 Owner: General Motors, Headquarters: Detroit, Michigan";
			}
			else if (command_text == L"Porsche")
			{
				return L"Owner: Volkswagen Group, Headquarters: Stuttgart, Baden-Württemberg, Germany";
			}
			else if (command_text == L"Rolls-Royce")
			{
				return L"Owner: Volkswagen Group, Headquarters: Goodwood, England, United Kingdom";
			}
			else if (command_text == L"Saturn")
			{
				return L"DEFUNCT AS OF 2010 Owner: Saturn Corporation, Headquarters: Detroit, Michigan";
			}
			else if (command_text == L"Scion")
			{
				return L"Owner: Toyota, Headquarters: Torrance, California";
			}
			else if (command_text == L"Shelby")
			{
				return L"Owner: Jerod Shelby, Headquarters: Richland, Washington";
			}
			else if (command_text == L"Subaru")
			{
				return L"Owner: Subaru Corporation, Headquarters: Ebisu, Shibuya, Tokyo, Japan";
			}
			else if (command_text == L"Suzuki")
			{
				return L"Owner: Suzuki Motor Corporation, Headquarters: Hamamatsu, Shizuoka, Japan";
			}
			else if (command_text == L"Tesla")
			{
				return L"Owner: Elon Musk, Headquarters: Palo Alto, California";
			}
			else if (command_text == L"Toyota")
			{
				return L"Owner: Toyota Motor Corporation, Headquarters: Toyota, Aichi, Japan";
			}
			else if (command_text == L"Volkswagen")
			{
				return L"Owner: Volkswagen Group, Headquarters: Wolfsburg, Germany";
			}
			else if (command_text == L"Volvo")
			{
				return L"Owner: Volvo Group, Headquarters: Gothenburg, Sweden";
			}
			else
			{
				return L"This database is not complete. I either do not have that make logged or you are making something up. If you are making it up, shame on you.";
			}
		}
	};
}
