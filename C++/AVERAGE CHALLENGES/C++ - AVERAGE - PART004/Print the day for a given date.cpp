#include <iostream>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    string day;
    int d;
    cin >> day >> d;

    array<string, 7> days = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    auto it = find(days.begin(), days.end(), day);
    if (it != days.end()) {
        int index = distance(days.begin(), it);
        cout << days[((index + d) % 7 + 7 - 1) % 7];
    }

    return 0;
}