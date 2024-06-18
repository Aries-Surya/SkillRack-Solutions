#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    std::string expandedString;
    int multiplier = 0;
    char currentChar;

    for (char c : S) {
        if (isdigit(c)) {
            multiplier = multiplier * 10 + (c - '0');
        } else {
            if (multiplier == 0) {
                expandedString += c;
            } else {
                currentChar = c;
                expandedString.append(multiplier, currentChar);
                multiplier = 0;
            }
        }
    }

    std::cout << expandedString << std::endl;

    return 0;
}
