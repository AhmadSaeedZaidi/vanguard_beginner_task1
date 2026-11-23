#include "game.h" //importing game module

#include <iostream>

int choice() {
    std::cout << "Choose difficulty: 1) Easy (1-10)  2) Medium (1-20)  3) Hard (1-100)\n";
    int choice;
    std::cin >> choice;
    switch (choice) {
    case 1:
        return 10;
    case 2:
        return 20;
    case 3:
        return 100;
    default:
        std::cout << "Invalid choice. Using Medium.\n";
        return 20;
    }
}


void playGame() { // playGame function from the module

    
    const int maximum = choice();
    const int minimum = 1;

    const int target = randomNumber(minimum, maximum);

    std::cout << "=== GUESSQUEST ===\n";
    std::cout << "I'm thinking of a number between " << minimum
              << " and " << maximum << ".\n\n";

    int attemptsRemaining = 5;
    while (true) {
        std::cout << "Attempts remaining: " << attemptsRemaining << '\n';
        std::cout << "Your guess: ";
        int guess;
        if (!(std::cin >> guess)) { //checking if any integer is inputted 
            std::cout << "\nNo integer read. Ending the game.\n";
            return;
        }

        if (guess == target) { // win con
            std::cout << "You win!\n";
            return;
        }

        --attemptsRemaining;
        if (attemptsRemaining == 0) {
            std::cout << "You lose! The number was " << target << ".\n";
            return;
        }

        if (guess < target) {
            std::cout << "Too low!\n\n";
        } else {
            std::cout << "Too high!\n\n";
        }
    }
}
