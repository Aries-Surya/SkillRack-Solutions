#include <iostream>
#include <cstring>
#include <climits>

int main() {
    int N;
    std::cin >> N;
    char lN[21];
    int p, d;
    char lDI[21];
    int lD = INT_MAX;
    for (int i = 0; i < N; i++) {
        std::cin >> lN >> p >> d;

        int savings = (p * d) / 100;
        if (savings < lD) {
            lD = savings;
            std::strcpy(lDI, lN);
        }
    }

    std::cout << lDI << std::endl;

    return 0;
}

