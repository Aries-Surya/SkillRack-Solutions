#include <iostream>

int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int N;
    std::cin >> N;

    int nextNumber = N + 1;
    while (!isPalindrome(nextNumber)) {
        nextNumber++;
    }

    std::cout << nextNumber << std::endl;

    return 0;
}
