#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::string word;

    while (iss >> word) {
        for (size_t i = 0; i < word.length(); ++i) {
            if ((i + 1) % 2 == 0) {
                std::cout << (char)tolower(word[i]);
            } else {
                std::cout << (char)toupper(word[i]);
            }
        }
        std::cout << " ";
    }

    return 0;
}
