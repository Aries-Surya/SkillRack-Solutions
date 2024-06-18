#include <iostream>
#include <cctype> // for std::toupper

int main() {
    std::string S;
    std::getline(std::cin, S);

    bool capitalizeNext = true; // Flag to track if next character should be capitalized
    for (char& c : S) {
        if (std::isspace(c)) {
            capitalizeNext = true; // Set flag to capitalize next character after space
        } else {
            if (capitalizeNext && std::isalpha(c)) {
                c = std::toupper(c); // Capitalize first letter of word
                capitalizeNext = false; // Reset flag after capitalizing
            } else {
                capitalizeNext = false; // Turn off flag for subsequent non-space characters
            }
        }
    }

    std::cout << S << std::endl;

    return 0;
}
