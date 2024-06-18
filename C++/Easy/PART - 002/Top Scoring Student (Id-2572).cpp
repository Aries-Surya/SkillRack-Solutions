#include <iostream>
#include <string>
#include <sstream>

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore(); // Ignore the newline character after reading N

    std::string topStudent;
    int highestMarks = -1;

    for (int i = 0; i < N; ++i) {
        std::string input;
        std::getline(std::cin, input);

        std::stringstream ss(input);
        std::string name, maths, physics, chemistry;
        std::getline(ss, name, ':');
        std::getline(ss, maths, ':');
        std::getline(ss, physics, ':');
        std::getline(ss, chemistry, ':');

        int totalMarks = std::stoi(maths) + std::stoi(physics) + std::stoi(chemistry);

        if (totalMarks > highestMarks) {
            highestMarks = totalMarks;
            topStudent = name;
        }
    }

    std::cout << topStudent << std::endl;

    return 0;
}
