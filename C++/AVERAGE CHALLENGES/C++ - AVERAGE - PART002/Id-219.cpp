#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int stepsToObtain(int X, int Y, int Z) {
    if (Z > X + Y)
        return -1;

    if (Z % gcd(X, Y) != 0)
        return -1;

    int a = 0, b = 0, steps = 0;

    while (a != Z && b != Z) {
        int pour = min(X - a, Y - b);
        b += pour;
        a += pour;
        steps++;

        if (a == Z || b == Z)
            break;

        if (a == X) {
            a = 0;
            steps++;
        }

        if (b == Y) {
            b = 0;
            steps++;
        }
    }

    return steps;
}

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int result = stepsToObtain(X, Y, Z);

    cout << result << endl;

    return 0;
}