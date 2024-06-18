#include <iostream>
#include <string>

int main() {
    std::string S;
    std::getline(std::cin, S);

    int length = S.length();
    int mid = (length - 1) / 2;

    // Extract the middle three letters
    std::string result = S.substr(mid - 1, 3);

    // Output the result
    std::cout << result << std::endl;

    return 0;
}
