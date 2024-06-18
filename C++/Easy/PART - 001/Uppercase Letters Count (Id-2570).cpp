#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string S;
    std::getline(std::cin, S);

    int countUpper = 0;

    for (char c : S) {
        if (isupper(c)) {
            countUpper++;
        }
    }

    std::cout << countUpper << std::endl;

    return 0;
}
