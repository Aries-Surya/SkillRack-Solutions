#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int X, Y;
    std::cin >> X >> Y;

    int result = gcd(X, Y);

    std::cout << result << std::endl;

    return 0;
}
