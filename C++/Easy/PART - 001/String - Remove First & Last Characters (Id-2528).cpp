#include <iostream>
#include <string>

int main() {
    std::string S;
    std::getline(std::cin, S);

    if (S.length() > 2) {
        std::cout << S.substr(1, S.length() - 2) << std::endl;
    }

    return 0;
}
