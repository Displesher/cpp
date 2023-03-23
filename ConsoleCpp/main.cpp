#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

enum variant
{
	rock,
	scissors,
	paper
};

class Player
{
private:
	string name;
	variant choice;
public:
	Player()
	{
		this->name = "Bot";
		this->choice = variant::rock;
	}
	Player(string name, variant choice)
	{
		this->name = name;
		this->choice = choice;
	}
	string who_wins(Player player)
	{
		string who_wins;

		if (
			 (this->choice == paper && player.choice == rock) ||
			 (this->choice == rock && player.choice == scissors) ||
			 (this->choice == scissors && player.choice == paper)
			)
		{
			who_wins = "Победил игрок с именем: " + this->name;
		}
		if (
			(player.choice == paper && this->choice == rock) ||
			(player.choice == rock && this->choice == scissors) ||
			(player.choice == scissors && this->choice == paper)
			)
		{
			who_wins = "Победил игрок с именем: " + player.name;
		}
		else if (this->choice == player.choice)
		{
			who_wins = "Ничья";
		}

		return who_wins;
	}
};
auto main() -> int
{
	setlocale(LC_ALL, "RU");

	Player bot;
	Player alex("Alex", variant::paper);

	cout << bot.who_wins(alex) << endl;

	return 0;
}