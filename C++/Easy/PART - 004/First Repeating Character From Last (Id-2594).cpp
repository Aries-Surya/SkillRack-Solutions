#include <iostream>
#include <unordered_set>

int main() {
    std::string S;
    std::getline(std::cin, S);

    std::unordered_set<char> seen;

    // Traverse the string from right to left
    for (int i = S.size() - 1; i >= 0; --i) {
        char c = S[i];
        if (seen.find(c) != seen.end()) {
            std::cout << c << std::endl;
            return 0;
        }
        seen.insert(c);
    }

    // If no repeating character found (though problem statement guarantees at least one)
    // we should not reach here due to the constraints.
    return 0;
}
