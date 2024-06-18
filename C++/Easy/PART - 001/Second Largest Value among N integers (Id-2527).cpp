#include <iostream>
#include <limits>

int main() {
    int N;
    std::cin >> N;

    int largest = std::numeric_limits<int>::min();
    int secondLargest = std::numeric_limits<int>::min();

    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;
        
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num < largest) {
            secondLargest = num;
        }
    }

    std::cout << secondLargest << std::endl;
    return 0;
}
