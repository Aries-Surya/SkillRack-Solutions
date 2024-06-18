#include <iostream>
#include <unordered_set>
#include <string>

void find_first_repeating_character(const std::string &s) {
    std::unordered_set<char> seen_characters;
    for (char c : s) {
        if (seen_characters.find(c) != seen_characters.end()) {
            std::cout << c << std::endl;
            return;
        }
        seen_characters.insert(c);
    }
}

int main() {
    std::string input_string;
    std::cin >> input_string;
    find_first_repeating_character(input_string);
    return 0;
}
