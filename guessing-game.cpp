#include <iostream>
#include <ctime>
#include <cstdlib>

// Function to get user input
int getUserInput() {
    int guess;
    std::cout << "Enter your guess (1-100): ";
    std::cin >> guess;
    return guess;
}

// Function to check if the guess is correct
bool isGuessCorrect(int guess, int target) {
    if (guess == target) {
        std::cout << "Congratulations! You guessed the correct number!" << std::endl;
        return true;
    } else if (guess < target) {
        std::cout << "Your guess is too low. Try again." << std::endl;
    } else {
        std::cout << "Your guess is too high. Try again." << std::endl;
    }
    return false;
}

int main() {
    // Seed the random number generator
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int target = std::rand() % 100 + 1;

    bool correctGuess = false;
    int numberOfTries = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;

    // Keep prompting the user for input until the correct number is guessed
    while (!correctGuess) {
        int guess = getUserInput();
        numberOfTries++;
        correctGuess = isGuessCorrect(guess, target);
    }

    std::cout << "You guessed the correct number in " << numberOfTries << " tries." << std::endl;

    return 0;
}