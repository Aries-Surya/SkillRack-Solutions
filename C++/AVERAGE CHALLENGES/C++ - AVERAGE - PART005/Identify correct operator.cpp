#include <iostream>

int main() {
    int left, right, result;
    char op;
    std::cin >> left >> op >> right >> std::ws >> result;

    if (left + right == result)
        std::cout << "+";
    else if (left - right == result)
        std::cout << "-";
    else if (left * right == result)
        std::cout << "*";
    else
        std::cout << "/";
}
