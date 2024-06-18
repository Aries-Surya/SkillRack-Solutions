#include <iostream>
#include <iomanip>

int main() {
    int N;
    std::cin >> N;

    double firstInningsSum = 0;
    double secondInningsSum = 0;

    for (int i = 0; i < N; ++i) {
        int firstInnings, secondInnings;
        std::cin >> firstInnings >> secondInnings;

        firstInningsSum += firstInnings;
        secondInningsSum += secondInnings;
    }

    double firstInningsAvg = firstInningsSum / N;
    double secondInningsAvg = secondInningsSum / N;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << firstInningsAvg << std::endl;
    std::cout << secondInningsAvg << std::endl;

    return 0;
}
