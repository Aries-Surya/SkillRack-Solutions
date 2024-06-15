#include <iostream>

int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    std::cout << reverse(reverse(a) + reverse(b)) << std::endl;

    return 0;
}
