#include <iostream>
#include <string>

int main() {
    std::string S;
    std::getline(std::cin, S);

    int length = S.length();
    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; i < length; ++i) {
        if (S[i] != ' ') {
            if (!inWord) {
                inWord = true;
                wordCount++;
            }
        } else {
            inWord = false;
        }
    }

    // If there's a word at the end of the string without a trailing space
    if (inWord) {
        wordCount++;
    }

    std::cout << wordCount << std::endl;

    return 0;
}
