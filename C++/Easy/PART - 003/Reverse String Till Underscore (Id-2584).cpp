#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string S;
    std::getline(std::cin, S);
    
    size_t underscore_pos = S.find('_');
    
    if (underscore_pos != std::string::npos) {
        std::reverse(S.begin(), S.begin() + underscore_pos);
    } else {
        std::reverse(S.begin(), S.end());
    }
    
    std::cout << S << std::endl;
    
    return 0;
}
