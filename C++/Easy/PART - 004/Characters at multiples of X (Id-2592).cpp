#include <iostream>
#include <string>

int main() {
    std::string S;
    int X;
    
    // Read input values
    std::getline(std::cin, S);
    std::cin >> X;

    // Initialize an empty string to store the result
    std::string result = "";

    // Iterate over the string S to collect characters at multiples of X
    for (int i = X - 1; i < S.length(); i += X) {
        result += S[i];
    }

    // Output the collected characters
    std::cout << result << std::endl;

    return 0;
}
