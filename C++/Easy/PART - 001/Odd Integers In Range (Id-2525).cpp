#include <iostream>

int main() {
    int X, Y;
    std::cin >> X >> Y;

    for (int i = X + 1; i < Y; ++i) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}
