#include <iostream>
#include <limits>

int main() {
    int n;
    std::cin >> n;

    double mostEff = -1;
    int mostEffCar = -1;

    for (int i = 0; i < n; i++) {
        int fuel, distance;
        std::cin >> fuel >> distance;

        double eff = static_cast<double>(distance) / fuel;
        if (eff > mostEff) {
            mostEff = eff;
            mostEffCar = i;
        }
    }

    std::cout << mostEffCar + 1 << std::endl;

    return 0;
}
