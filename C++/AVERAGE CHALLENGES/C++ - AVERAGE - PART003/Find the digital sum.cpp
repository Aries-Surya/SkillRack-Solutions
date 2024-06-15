#include <iostream>

int digitalSum(int num) {
    if (num < 10) {
        return num;
    }

    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return digitalSum(sum);
}

int main() {
    int N;
    std::cin >> N;

    int sum = digitalSum(N);

    std::cout << sum << std::endl;

    return 0;
}
