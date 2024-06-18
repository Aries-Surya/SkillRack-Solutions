#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string S;
    std::getline(std::cin, S);

    // Using std::reverse to reverse the string
    std::reverse(S.begin(), S.end());

    std::cout << S << std::endl;

    return 0;
}
