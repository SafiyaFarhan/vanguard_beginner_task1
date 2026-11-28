#include "game.h"

#include <iostream>

void playGame() {
    const int minimum = 1;
    const int maximum = 20;

    char playAgain = 'y';

    // outer loop controls whether another round should start
    while (playAgain == 'y' || playAgain == 'Y') {

        const int target = randomNumber(minimum, maximum);

        std::cout << "\n=== GUESSQUEST ===\n";
        std::cout << "I'm thinking of a number between " << minimum
                  << " and " << maximum << ".\n\n";

        int attemptsRemaining = 5;   // storing attempts remaining

        // inner loop controls the guessing round
        while (true) {
            std::cout << "Attempts remaining: " << attemptsRemaining << '\n';
            std::cout << "Your guess: ";

            int guess;

            if (!(std::cin >> guess)) {
                std::cout << "\nNo integer read. Ending the game.\n";
                return;
            }

            if (guess == target) {
                std::cout << "You win!\n";
                break;
            }

            --attemptsRemaining; // decrementing attempts after each failed attempt

            if (attemptsRemaining == 0) {
                std::cout << "You lose! The number was " << target << ".\n";
                break;
            }

            if (guess < target) {
                std::cout << "Too low!\n\n";
            } else {
                std::cout << "Too high!\n\n";
            }
        }

        // asking whether the player wants another round
        while (true) {
            std::cout << "\nWould you like to play again? (y/n): ";

            if (!(std::cin >> playAgain)) {
                std::cout << "\nEnding the game.\n";
                return;
            }

            if (playAgain == 'y' || playAgain == 'Y' ||
                playAgain == 'n' || playAgain == 'N') {
                break;
            }

            std::cout << "Invalid choice. Please enter y or n.\n";
        }
    }

    std::cout << "\nThanks for playing GuessQuest!\n";
}

