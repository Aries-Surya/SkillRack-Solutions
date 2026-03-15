#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {s
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    unordered_set<char> set1(s1.begin(), s1.end());

    int common_count = 0;

    // Count common characters in s2 that are also in set1
    for (char c : s2) {
        if (set1.count(c)) {
            common_count++;
            set1.erase(c); // Ensure each character is counted only once
        }
    }

    cout << common_count << endl;

    return 0;
}

