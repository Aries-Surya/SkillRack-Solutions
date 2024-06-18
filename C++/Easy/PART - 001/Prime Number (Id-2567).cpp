#include <iostream>
#include <cmath>

bool isPrime(int N) {
    if (N <= 1) return false;
    if (N <= 3) return true;
    if (N % 2 == 0 || N % 3 == 0) return false;
    for (int i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int N;
    std::cin >> N;
    std::cout << (isPrime(N) ? "YES" : "NO") << std::endl;
    return 0;
}
