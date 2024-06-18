#include <iostream>
#include <cmath>

int main() {
    double rupees;
    std::cin >> rupees;

    // Convert rupees to paise
    int paise = static_cast<int>(round(rupees * 100));

    std::cout << paise << std::endl;

    return 0;
}
