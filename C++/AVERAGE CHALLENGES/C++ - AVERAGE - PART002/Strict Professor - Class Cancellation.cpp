#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int startHour, startMin;
    char colon; // dummy variable to consume the colon character
    cin >> startHour >> colon >> startMin;
    int classTime = startHour * 60 + startMin;
    int badStudent = 0;

    int hour, min;
    while (cin >> hour >> colon >> min) {
        int arrivalTime = hour * 60 + min;
        if (arrivalTime > classTime)
            badStudent++;
    }

    if ((n - badStudent) >= m)
        cout << "No";
    else
        cout << "Yes";

    return 0;
}