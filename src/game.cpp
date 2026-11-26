#include "game.h"

#include <iostream>

void playGame() {
    const int minimum = 1;
    int maximum = 20;

    std::cout << "=== GUESSQUEST ===\n";
    std::cout<<"Please choose a difficulty level:\n";
    std::cout<<"1. Easy (1-10)\n";
    std::cout<<"2. Medium (1-20)\n";
    std::cout<<"3. Hard (1-100)\n";
    int choice;

    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "\n***You have chosen Easy mode.***";
            maximum = 10;
            break;

        case 2:
            std::cout << "\n***You have chosen Medium mode.***\n";
            maximum = 20;
            break;

        case 3:
            std::cout << "\n***You have chosen Hard mode.***\n";
            maximum = 100;
            break;

        default:
            std::cout << "Invalid choice. Please select a valid difficulty level.\n";
            return;
    }

    const int target = randomNumber(minimum, maximum);

    std::cout << "\nI'm thinking of a number between " << minimum
              << " and " << maximum << ".\n\n";

    int attemptsRemaining = 5;
    while (true) {

        if (attemptsRemaining == 0) {
            std::cout << "You lose! The number was " << target << ".\n";
            return;
        }

        std::cout << "-- Attempts remaining: " << attemptsRemaining <<" --\n";
        std::cout << "Your guess: ";
        int guess;
        if (!(std::cin >> guess)) {
            std::cout << "\nNo integer read. Ending the game.\n";
            return;
        }

        if (guess == target) {
            std::cout << "You win!\n";
            return;
        }

        else if (guess < target) {
            std::cout << "Too low!\n\n";
        } 
        
        else {
            std::cout << "Too high!\n\n";
        }

        --attemptsRemaining;
        if (attemptsRemaining > 0){
            std::cout << "Try again!\n\n";
        }
    }
}
