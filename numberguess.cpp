#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayIntroduction() {
    cout << "Welcome to the Guessing Game!\n";
    cout << "I've selected a secret number between 1 and 25.\n";
    cout << "You have 5 attempts to guess it.\n";
}

void playGame() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNum = rand() % 25 + 1;

    int maxAttempts = 5;
    int attempt = 0;
    int guess;

    while (attempt < maxAttempts) {
        cout << "\nAttempt " << attempt + 1 << " of " << maxAttempts << endl;
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNum) {
            cout << "Congratulations! You guessed the secret number.\n";
            return;
        }
        else if (guess < secretNum) {
            cout << "Too low! Try a higher number.\n";
        }
        else {
            cout << "Too high! Try a lower number.\n";
        }

        attempt++;
    }

    cout << "Sorry, you've run out of attempts. The secret number was: " << secretNum << endl;
}

int main() {
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        displayIntroduction();
        playGame();

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thanks for playing!\n";

    return 0;
}
