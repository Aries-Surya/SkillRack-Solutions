#include <iostream>

int main() {
    int hour, min;
    char colon;
    std::cin >> hour >> colon >> min;
    
    if(hour > 24 || min > 60) {
        std::cout << "INVALIDINPUT";
        return 0;
    }
    
    if(hour >= 12) std::cout << "PM";
    else std::cout << "AM";

    return 0;
}
