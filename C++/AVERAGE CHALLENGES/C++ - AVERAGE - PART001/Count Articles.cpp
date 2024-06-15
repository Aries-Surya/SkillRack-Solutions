#include <iostream>
#include <string>
#include <sstream>

int countArticles(const std::string& str) {
    int count = 0;
    std::istringstream iss(str);
    std::string token;

    while (iss >> token) {
        if (token == "a" || token == "an" || token == "the") {
            count++;
        }
    }

    return count;
}

int main() {
    std::string str;
    std::getline(std::cin, str);

    int numArticles = countArticles(str);

    std::cout << numArticles << std::endl;

    return 0;
}