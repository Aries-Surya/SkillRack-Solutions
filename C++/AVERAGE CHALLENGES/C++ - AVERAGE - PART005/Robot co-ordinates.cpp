#include <iostream>

int main() {
    int x, y, distance;
    char direction;
    std::cin >> std::ws >> x >> std::ws >> y;

    while (std::cin >> direction >> distance) {
        if (direction == 'N') {
            y += distance;
        } else if (direction == 'E') {
            x += distance;
        } else if (direction == 'S') {
            y -= distance;
        } else if (direction == 'W') {
            x -= distance;
        }
    }

    std::cout << "x" << x << " y" << y << std::endl;

    return 0;
}
