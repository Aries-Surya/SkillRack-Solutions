#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    double totalAmount = 0.0;

    for (int i = 0; i < n; i++) {
        int labelPrice;
        double discount = 0.0;
        cin >> labelPrice;

        if (labelPrice >= 1000)
            discount = 0.50;
        else if (labelPrice > 500)
            discount = 0.25;
        else if (labelPrice > 400)
            discount = 0.20;

        totalAmount += labelPrice - (labelPrice * discount);
    }

    if (totalAmount > 2000)
        totalAmount -= 100;

    cout << fixed << setprecision(2) << totalAmount;

    return 0;
}