#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> country(n), capital(n);

    for (int i = 0; i < n; i++) {
        cin >> country[i] >> capital[i];
    }
    string find;
    cin >> find;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (country[i] == find) {
            cout << capital[i];
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "NONE";
    }

    return 0;
}