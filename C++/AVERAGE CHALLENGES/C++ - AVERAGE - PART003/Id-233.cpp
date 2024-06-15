#include <iostream>
#include <string>

int main() {
    std::string S;
    int X, Y;
    std::cin >> S;
    std::cin >> X >> Y;

    int len = S.length();

    // Adjust X and Y to be within the length of S
    X = (X - 1) % len;
    Y = (Y - 1) % len;

    if (S[X] == S[Y]) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
