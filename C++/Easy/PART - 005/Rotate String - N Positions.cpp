#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    int N;
    std::cin >> N;

    int L = S.length();
    N = N % L;  // Handle rotation greater than length of string
    std::string rotated_string = S.substr(L - N) + S.substr(0, L - N);

    std::cout << rotated_string << std::endl;

    return 0;
}
