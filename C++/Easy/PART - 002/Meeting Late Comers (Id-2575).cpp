#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string time;
    int lateCount = 0;

    while (iss >> time) {
        int hours = std::stoi(time.substr(0, 2));
        int minutes = std::stoi(time.substr(3, 2));

        if (hours > 10 || (hours == 10 && minutes > 0)) {
            lateCount++;
        }
    }

    std::cout << lateCount << std::endl;

    return 0;
}
