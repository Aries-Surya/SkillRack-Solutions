#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void sortDescendingUnique(const string& str) {
    vector<bool> seen(26, false);
    vector<char> unique;

    for (char ch : str) {
        if (islower(ch) && !seen[ch - 'a']) {
            seen[ch - 'a'] = true;
            unique.push_back(ch);
        }
    }

    sort(unique.rbegin(), unique.rend());

    for (char ch : unique) {
        cout << ch;
    }

    cout << endl;
}

int main() {
    string str;
    cin >> str;

    sortDescendingUnique(str);

    return 0;
}