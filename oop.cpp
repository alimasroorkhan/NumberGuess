#include <iostream>
#include <ctime>
using namespace std;

void game()
{
	srand(static_cast<unsigned int>(time(0)));
	int secretnum = rand() % 25 + 1;

	int guess = 0;
	int maxattempts = 5;
	int attempt = 0;

	while (attempt < maxattempts)
	{
		cout << "Can you guess the number between 1 & 25?\n";
		cin >> guess;

		if (guess > secretnum)
		{
			cout << "Too high! try again.\n";
		}
		else if (guess < secretnum)
		{
			cout << "Too low! try again.\n";
		}
		else if (guess == secretnum)
		{
			cout << "Bingo! you have guessed the secret number!\n";
			break;
		}
		attempt++;
		cout << "Attempts remaining : " << maxattempts - attempt << endl;
	}
	if (attempt == maxattempts)
	{
		cout << "Sorry, you've run out of attempts. The secret number was: " << secretnum << endl;
	}
}

void main()
{
	char playAgain = 'y';
	while (playAgain == 'y' || playAgain == 'Y')
	{
		game();
		cout << "Do you want to play again? (y/n): ";
		cin >> playAgain;
	}

	cout << "Thanks for playing!\n";

}





