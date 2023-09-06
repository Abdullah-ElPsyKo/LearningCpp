#include <iostream>
#include <list>
using namespace std;

enum choice
{
	rock,
	paper,
	scissors
};

void main()
{
	cout << "ROCK PAPER SCISSOR r/p/s" << endl;

	int player1 = 0;
	int bot = 0;

	char input;


	// Array bot choices
	choice botchoices[3] = { rock, paper, scissors };

	// Providing a seed value
	srand((unsigned)time(NULL));

	while (player1 != 3 && bot != 3)
	{
		cin >> input;
		// Get random number
		int rangen = rand() % 3;
		choice userInput;
		switch (input)
		{
		case 'r':
			userInput = rock;
			break;
		case 'p':
			userInput = paper;
			break;
		case 's':
			userInput = scissors;
			break;
		default:
			cout << "Invalid user input." << endl;
			break;
		}

		choice botInput = botchoices[rangen];

		if (botInput == userInput)
		{
			cout << "DRAW" << endl;
		}
		else
		{
			switch (userInput)
			{
			case rock:
				if (botInput == paper)
				{
					bot++;
					cout << "Bot +1" << endl;
				}
				else
				{
					player1++;
					cout << "Player +1" << endl;
				}
				break;
			case paper:
				if (botInput == rock)
				{
					player1++;
					cout << "Player +1" << endl;
				}
				else
				{
					bot++;
					cout << "Bot +1" << endl;
				}
				break;
			case scissors:
				if (botInput == paper)
				{
					player1++;
					cout << "Player +1" << endl;
				}
				else
				{
					bot++;
					cout << "Bot +1" << endl;
				}
				break;
			default:
				break;
			}
		}
	}
	if (player1 == 3)
	{
		cout << "\n\nPlayer1 is the winner!" << endl;
	}
	else
	{
		cout << "\n\nUnlucko Player1 lost" << endl;
	}
}