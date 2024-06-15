#include <iostream>
#include <cmath>

int convertToBase10(int number, int base) {
    int result = 0;
    int multiplier = 1;
    while (number > 0) {
        int digit = number % 10;
        result += digit * multiplier;
        multiplier *= base;
        number /= 10;
    }
    return result;
}

int main() {
    int N, X, Y;
    std::cin >> N;
    std::cin >> X >> Y;

    int sum = convertToBase10(X, N) + convertToBase10(Y, N);

    std::cout << sum << std::endl;

    return 0;
}
