#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand((time(0))); // Seed the random number generator
    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess = 0; // Initialize guess
    int tries = 0; // Initialize the number of tries to 0
    int lifelines = 5; // Initialize the number of lifelines

    cout << "Welcome to the Number Guessing Game!\n\n";
    cout << "I have selected a number between 1 and 100. Can you guess it?\n";

    // Loop until the user guesses the correct number or runs out of lifelines
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++; // Increment the number of tries

        if (guess > randomNumber) {
            cout << "Too high! Try again.\n\n";
        } else if (guess < randomNumber) {
            cout << "Too low! Try again.\n\n";
        } else {
            cout << "Congratulations! You guessed the number correctly.\n";
            cout << "It took you " << tries << " tries.\n";
            return 0; // Exit the program
        }

        lifelines--; // Decrement the number of lifelines
        cout << "Lifelines remaining: " << lifelines << "\n";
    } while (guess != randomNumber && lifelines > 0);

    // If the user runs out of lifelines
    if (lifelines == 0) {
        cout << "You've run out of lifelines! The correct number was " << randomNumber << ".\n";
    }

    return 0;
}
