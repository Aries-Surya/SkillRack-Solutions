#include <iostream>
#include <string>

int main() {
    std::string S;
    char C;

    std::getline(std::cin, S);
    std::cin >> C;

    size_t pos = S.find(C);
    if (pos != std::string::npos) {
        std::cout << S.substr(0, pos) << std::endl;
    } else {
        std::cout << S << std::endl;
    }

    return 0;
}
