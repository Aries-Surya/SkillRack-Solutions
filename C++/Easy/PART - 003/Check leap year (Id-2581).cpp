#include <iostream>

int main() {
    int year;
    std::cin >> year;

    if (year % 400 == 0) {
        std::cout << "yes" << std::endl;
    } else if (year % 100 == 0) {
        std::cout << "no" << std::endl;
    } else if (year % 4 == 0) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
