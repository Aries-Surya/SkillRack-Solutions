#include <iostream>
#include <cmath>

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int m, n, count = 0;
    std::cin >> m >> n;

    for (int i = m; i <= n; ++i) {
        if (is_prime(i)) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
