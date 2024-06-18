#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> nums(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> nums[i];
    }

    int n;
    std::cin >> n;

    int d = nums[1] - nums[0];
    int term = nums[0] + (n - 1) * d;

    std::cout << term << std::endl;

    return 0;
}
