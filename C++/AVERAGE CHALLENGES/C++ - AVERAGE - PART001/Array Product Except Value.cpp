#include <iostream>
#include <vector>

std::vector<int> productExceptSelf(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> output(n, 1);

    // Calculate product from left to right
    for (int i = 1; i < n; i++) {
        output[i] = output[i - 1] * nums[i - 1];
    }

    // Calculate product from right to left
    int product = 1;
    for (int i = n - 1; i >= 0; i--) {
        output[i] *= product;
        product *= nums[i];
    }

    return output;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Enter " << n << " numbers separated by spaces:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> output = productExceptSelf(nums);

    std::cout << "Output: ";
    for (int num : output) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}