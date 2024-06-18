#include <iostream>
#include <string>
#include <set>

std::string arrange_alphabets(const std::string& S) {
    std::set<char> unique_chars(S.begin(), S.end());
    std::string result(unique_chars.rbegin(), unique_chars.rend());
    return result;
}

int main() {
    std::string S;
    std::cin >> S;

    std::string arranged_string = arrange_alphabets(S);
    std::cout << arranged_string << std::endl;

    return 0;
}
