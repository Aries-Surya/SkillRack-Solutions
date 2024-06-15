#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int start = (n * (n - 1) / 2) + n;

    for (int i = 1; i <= n; ++i) {
        int curr = start;
        for (int j = 1; j <= n - (i - 1); ++j) {
            std::cout << curr << " ";
            curr -= n - (j - 1);
        }
        start--;
        std::cout << std::endl;
    }
}
