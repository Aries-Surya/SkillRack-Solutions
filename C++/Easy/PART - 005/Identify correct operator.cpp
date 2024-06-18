#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string E;
    std::getline(std::cin, E);

    size_t pos = E.find('=');
    if (pos == std::string::npos) {
        std::cout << "Invalid input expression: Operator not found." << std::endl;
        return 1;
    }

    std::string remaining = E.substr(0, pos);
    int result = std::stoi(E.substr(pos + 1));

    char operator_char = '\0';
    for (char ch : remaining) {
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            operator_char = ch;
            break;
        }
    }

    if (operator_char == '\0') {
        std::cout << "Invalid input expression: Operator not found." << std::endl;
        return 1;
    }

    int B, C;
    std::istringstream iss(remaining);
    std::string B_str, C_str;
    std::getline(iss, B_str, operator_char);
    std::getline(iss, C_str);
    B = std::stoi(B_str);
    C = std::stoi(C_str);

    switch (operator_char) {
        case '+':
            if (B + C == result) {
                std::cout << '+' << std::endl;
            }
            break;
        case '-':
            if (B - C == result) {
                std::cout << '-' << std::endl;
            }
            break;
        case '*':
            if (B * C == result) {
                std::cout << '*' << std::endl;
            }
            break;
        case '/':
            if (C != 0 && B / C == result) {
                std::cout << '/' << std::endl;
            }
            break;
    }

    return 0;
}
