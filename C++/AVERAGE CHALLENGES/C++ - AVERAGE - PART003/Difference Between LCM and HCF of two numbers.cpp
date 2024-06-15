#include <iostream>

int hcf(int a, int b) {
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int a, b;
    std::cin >> a >> b;

    std::cout << lcm(a, b) - hcf(a, b) << std::endl;

    return 0;
}
