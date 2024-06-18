#include <iostream>
#include <sstream>
#include <iomanip>

int main() {
    std::string L;
    std::getline(std::cin, L);

    std::stringstream ss(L);
    double total_distance = 0.0;
    double total_time = 0.0;
    double distance, time;

    while (ss >> distance >> std::ws && ss.peek() != EOF) {
        char delimiter;
        ss >> delimiter; // Read '@'
        ss >> time;

        total_distance += distance;
        total_time += time;
    }

    // Calculate average speed
    double average_speed = total_distance / total_time;

    // Output average speed with 2 decimal places
    std::cout << std::fixed << std::setprecision(2) << average_speed << " kmph" << std::endl;

    return 0;
}
