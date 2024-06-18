#include <iostream>
#include <string>

int main() {
    std::string S1, S2;
    std::cin >> S1 >> S2;
    
    int count[26] = {0};
    int commonCount = 0;
    
    // Mark characters from S1
    for (char c : S1) {
        count[c - 'a']++;
    }
    
    // Count common characters in S2 and prevent double counting
    for (char c : S2) {
        if (count[c - 'a'] > 0) {
            commonCount++;
            count[c - 'a'] = 0; // Mark as counted to avoid double counting
        }
    }
    
    std::cout << commonCount << std::endl;
    
    return 0;
}
