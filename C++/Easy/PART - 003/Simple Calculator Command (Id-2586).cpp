#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string S;
    std::cin >> S;

    // Extracting numbers and operation
    int num1, num2;
    char operation;
    
    std::stringstream ss(S);
    ss >> num1 >> operation >> num2;

    // Performing the operation based on the operation character
    int result;
    switch (operation) {
        case 'A':
        case 'a':
            result = num1 + num2;
            break;
        case 'S':
        case 's':
            result = num1 - num2;
            break;
        case 'M':
        case 'm':
            result = num1 * num2;
            break;
        case 'D':
        case 'd':
            if (num2 != 0) {
                result = num1 / num2; // Integer division
            } else {
                std::cerr << "Error: Division by zero!" << std::endl;
                return 1;
            }
            break;
        default:
            std::cerr << "Error: Invalid operation character!" << std::endl;
            return 1;
    }

    // Output the result
    std::cout << result << std::endl;

    return 0;
}
