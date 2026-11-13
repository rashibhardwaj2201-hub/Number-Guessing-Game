

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int number = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Welcome to Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess < number) {
            cout << "Too Low! Try Again." << endl;
        }
        else if (guess > number) {
            cout << "Too High! Try Again." << endl;
        }
        else {
            cout << "Congratulations! Correct Guess." << endl;
            cout << "Total Attempts: " << attempts << endl;
        }

    } while (guess != number);

    return 0;
}

