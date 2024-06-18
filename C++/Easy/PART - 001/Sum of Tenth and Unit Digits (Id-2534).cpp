#include <iostream>

int main() {
    int N;
    std::cin >> N;

    // Extract the tenth and unit digits
    int tenth_digit = (N / 10) % 10;  // Dividing by 10 moves the units digit to the right
    int unit_digit = N % 10;           // Modulo 10 gives us the units digit

    // Calculate the sum of tenth and unit digits
    int sum = tenth_digit + unit_digit;

    // Output the result
    std::cout << sum << std::endl;

    return 0;
}
