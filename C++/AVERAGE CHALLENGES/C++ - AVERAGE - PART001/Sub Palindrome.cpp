#include <iostream>
#include <string>

bool isPalindrome(const std::string& str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int countSubPalindromes(const std::string& str) {
    int count = 0;
    int len = static_cast<int>(str.length());
    
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (isPalindrome(str, i, j - 1))
                count++;
        }
    }
    
    return count;
}

int main() {
    std::string str;
    std::cin >> str;

    int count = countSubPalindromes(str);

    std::cout << count << std::endl;

    return 0;
}

