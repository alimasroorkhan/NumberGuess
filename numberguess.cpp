#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNum = rand() % 25 + 1;

    int maxAttempts = 5;
    int attempt = 0;
    int guess;

    while (attempt < maxAttempts) {
        cout << "Guess the number between 1 & 25: ";
        cin >> guess;

        if (guess == secretNum) {
            cout << "Congratulations! You guessed the secret number.\n";
            return;
        }
        else if (guess < secretNum) {
            cout << "Too low! Try again.\n";
        }
        else {
            cout << "Too high! Try again.\n";
        }

        attempt++;
        cout << "Attempts remaining: " << maxAttempts - attempt << endl;
    }

    cout << "Sorry, you've run out of attempts. The secret number was: " << secretNum << endl;
}

int main() {
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thanks for playing!\n";

    return 0;
}
