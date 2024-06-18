#include <iostream>
#include <string>

int main() {
    std::string S, A, B;
    std::cin >> S >> A >> B;

    int count = 0;
    for (size_t i = 0; i < S.length() - 1; ++i) {
        if (S[i] == A[0] && S[i + 1] == B[0]) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
