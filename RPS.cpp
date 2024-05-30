#include <iostream>
#include <cstdlib> //include <cstdlib> to use rand()
#include <ctime>   //include <ctime> to use time

int main() {

    srand((unsigned) time(nullptr)); //provides a value that will be always changing to provide a random input

    char keepPlaying = 'Y'; //allows for while() loop to take in user input
    char userInput; //used to get the persons input for RPS

    std::cout << "Would you like to play RPS with me?" << std::endl;
    std::cout << "Y/N: ";
    std::cin >> keepPlaying;

    while (keepPlaying == 'Y' || keepPlaying == 'y') {
        int rNumber = rand() % 3; // gets the random number and sets it to rNumber % 3 as to make it 0, 1, or 2
        std::cout << "What do you want to play R/P/S: ";
        std::cin >> userInput;
        std::cout << std::endl;

        if (userInput == 'R' || userInput == 'r') {
            if (rNumber == 0) {
                std::cout << "Tie game!" << std::endl;
            } else if (rNumber == 1) {
                std::cout << "You win!" << std::endl;
            } else if (rNumber == 2) {
                std::cout << "You lose!" << std::endl;
            }
        } else if (userInput == 'P' || userInput == 'p') {
            if (rNumber == 1) {
                std::cout << "Tie game!" << std::endl;
            } else if (rNumber == 0) {
                std::cout << "You win!" << std::endl;
            } else if (rNumber == 2) {
                std::cout << "You lose!" << std::endl;
            }
        } else if (userInput == 'S' || userInput == 's') {
            if (rNumber == 2) {
                std::cout << "Tie game!" << std::endl;
            } else if (rNumber == 1) {
                std::cout << "You win!" << std::endl;
            } else if (rNumber == 0) {
                std::cout << "You lose!" << std::endl;
            }
        } else {
            std::cout << "That was not an option, sorry!" << std::endl;
            return 3;
        }

        std::cout << "Would you like to play again? Y/N: ";
        std::cin >> keepPlaying;
    }

    std::cout << "Maybe another time!" << std::endl;
    return 0;
}