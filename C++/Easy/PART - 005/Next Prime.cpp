#include <iostream>
#include <cmath>

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= std::sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    std::cin >> N;

    int next_prime = N + 1;
    while (!is_prime(next_prime)) {
        next_prime++;
    }

    std::cout << next_prime << std::endl;

    return 0;
}
