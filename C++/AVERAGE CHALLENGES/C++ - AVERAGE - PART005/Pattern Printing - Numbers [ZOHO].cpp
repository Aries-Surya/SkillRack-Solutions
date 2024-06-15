#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int curr = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            std::cout << curr << " ";
            curr = curr + (n - j);
        }
        std::cout << std::endl;
        curr = i + 2;
    }
}
