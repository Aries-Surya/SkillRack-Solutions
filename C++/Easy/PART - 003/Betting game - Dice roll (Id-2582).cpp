#include <iostream>
#include <sstream>

int main() {
    // Read the dice rolls from the first line
    std::string diceRolls;
    std::getline(std::cin, diceRolls);

    // Read the values of X and Y
    int X, Y;
    std::cin >> X >> Y;

    // Initialize stringstream with dice rolls string
    std::istringstream iss(diceRolls);
    int netGain = 0;
    int number;

    // Process each number in the dice rolls
    while (iss >> number) {
        if (number % 2 == 0) {  // Even number
            netGain -= Y;
        } else {  // Odd number
            netGain += X;
        }
    }

    // Output the net gain or loss
    std::cout << netGain << std::endl;

    return 0;
}
