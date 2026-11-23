#include "game.h" //importing game module

#include <iostream>

void playGame() { // playGame function from the module
    const int minimum = 1;
    const int maximum = 20;
    const int target = randomNumber(minimum, maximum);

    std::cout << "=== GUESSQUEST ===\n";
    std::cout << "I'm thinking of a number between " << minimum
              << " and " << maximum << ".\n\n";

    while (true) {
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

        std::cout << "Try again!\n\n"; //lmao loser
    }
}
