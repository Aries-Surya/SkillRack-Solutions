#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    int x, y;
    cin >> x >> y;

    for (char curr : str) {
        if (isdigit(curr)) {
            cout << curr - '0' + y;
        } else if (isalpha(curr)) {
            int ascii = tolower(curr) + x;
            if (ascii > 'z')
                ascii = 'a' + (ascii - 'z' - 1);
            cout << static_cast<char>(ascii);
        } else {
            cout << curr;
        }
    }
    cout << endl;

    return 0;
}