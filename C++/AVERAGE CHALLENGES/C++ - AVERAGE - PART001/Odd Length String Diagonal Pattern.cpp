#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    int len = str.length();
    
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len; j++) {
            if(j == i || j == len - i - 1){
                std::cout << str[j];
            }else{
                std::cout << " ";
        }
        }
        std::cout << std::endl;
    }
    
    return 0;
}

