#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string line1, line2;
    getline(cin, line1);
    getline(cin, line2);

    int sum1 = 0, sum2 = 0;
    int count1 = 0, count2 = 0;

    istringstream iss1(line1);
    int num;
    while (iss1 >> num) {
        if (num < 0) {
            cout << "INVALIDINPUT";
            return 0;
        }
        sum1 += num;
        count1++;
    }

    istringstream iss2(line2);
    while (iss2 >> num) {
        if (num < 0) {
            cout << "INVALIDINPUT";
            return 0;
        }
        sum2 += num;
        count2++;
    }

    int avg1 = sum1 / count1;
    int avg2 = sum2 / count2;

    if (avg1 > avg2) {
        cout << sum1;
    } else if (avg1 == avg2) {
        cout << (sum1 > sum2 ? sum1 : sum2);
    } else {
        cout << sum2;
    }

    return 0;
}