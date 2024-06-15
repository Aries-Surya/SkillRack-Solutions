#include <iostream>
#include <string>

// Function to check if a character is a vowel
bool isVowel(char ch) {
    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            return true;
        default:
            return false;
    }
}

int main() {
    std::string S;
    std::cin >> S;

    int len = S.length();

    // Reverse the string
    for (int i = 0; i < len / 2; ++i) {
        std::swap(S[i], S[len - i - 1]);
    }

    // Remove vowels
    std::string result;
    for (char ch : S) {
        if (!isVowel(ch)) {
            result += ch;
        }
    }

    std::cout << result << std::endl;

    return 0;
}
