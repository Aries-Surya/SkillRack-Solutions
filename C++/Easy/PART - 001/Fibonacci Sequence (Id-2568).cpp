#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<unsigned long long> fib;
    fib.push_back(0);
    fib.push_back(1);

    for (int i = 2; i < N; i++) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }

    for (int i = 0; i < N; i++) {
        if (i > 0) std::cout << " ";
        std::cout << fib[i];
    }
    std::cout << std::endl;

    return 0;
}
