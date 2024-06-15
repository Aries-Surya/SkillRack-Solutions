#include <iostream>

int main() {
    int ax, ay, bx, by, cx, cy, dx, dy;
    std::cin >> ax >> ay;
    std::cin >> bx >> by;
    std::cin >> cx >> cy;
    std::cin >> dx >> dy;

    int slopeAC = (cy - ay) * (cx - bx) - (cy - by) * (cx - ax);
    int slopeBD = (dy - by) * (dx - cx) - (dy - cy) * (dx - bx);

    if (slopeAC != 0 && slopeBD != 0)
        std::cout << "no" << std::endl;
    else
        std::cout << "yes" << std::endl;

    return 0;
}

