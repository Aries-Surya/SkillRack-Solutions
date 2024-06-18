#include <iostream>
#include <string>

int main() {
    std::string S1, S2;
    
    // Read input values
    std::getline(std::cin, S1);
    std::getline(std::cin, S2);

    // Find the length of the common part
    int len1 = S1.length();
    int len2 = S2.length();
    int maxLen = std::min(len1, len2); // Get the minimum length between S1 and S2

    // Initialize an empty string to store the common part
    std::string commonPart = "";

    // Traverse from the end of S1 and start of S2 to find the common suffix-prefix
    int i = len1 - 1, j = 0;
    while (i >= 0 && j < maxLen && S1[i] == S2[j]) {
        commonPart = S1[i] + commonPart;
        i--;
        j++;
    }

    // Output the common part
    std::cout << commonPart << std::endl;

    return 0;
}
