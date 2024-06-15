#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    int count = 1;
    for (char curr : word) {
        if (curr == 'F' || curr == 'T' || curr == 'L' || curr == 'D')
            count *= 2;
    }
    cout << count;

    return 0;
}