#include <iostream>
#include <iomanip>

int main() {
    double amountAlen, amountTim;
    int widthAlen, widthTim;

    // Input the amount spent by Alen and Tim
    std::cin >> amountAlen >> amountTim;

    // Input the width of the courts of Alen and Tim
    std::cin >> widthAlen >> widthTim;

    // Calculate the area of Alen's and Tim's courts
    double areaAlen = amountAlen / 5.0;
    double areaTim = amountTim / 5.0;

    // Calculate the length of Alen's and Tim's courts
    double lengthAlen = areaAlen / widthAlen;
    double lengthTim = areaTim / widthTim;

    // Calculate the difference in length
    double difference = std::abs(lengthAlen - lengthTim);

    // Output the difference rounded off to two decimal places
    std::cout << std::fixed << std::setprecision(2) << difference << std::endl;

    return 0;
}
