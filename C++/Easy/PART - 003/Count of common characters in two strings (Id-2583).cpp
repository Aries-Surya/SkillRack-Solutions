#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string S1, S2;
    std::cin >> S1 >> S2;

    int countS1[26] = {0};
    int countS2[26] = {0};

    // Count frequency of each character in S1
    for (char c : S1) {
        countS1[c - 'a']++;
    }

    // Count frequency of each character in S2
    for (char c : S2) {
        countS2[c - 'a']++;
    }

    int commonCount = 0;
    // Calculate common characters
    for (int i = 0; i < 26; i++) {
        commonCount += std::min(countS1[i], countS2[i]);
    }

    std::cout << commonCount << std::endl;

    return 0;
}
