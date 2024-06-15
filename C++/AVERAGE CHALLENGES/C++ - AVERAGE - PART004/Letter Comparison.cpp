#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s1, s2;

    // Input strings
    getline(cin, s1);
    getline(cin, s2);

    vector<int> freq(26, 0);

    // Calculate character frequencies in s1
    for(char c : s1) {
        if(islower(c)) {
            freq[c - 'a']++;
        }
    }

    // Calculate character frequencies in s2
    for(char c : s2) {
        if(islower(c)) {
            freq[c - 'a']--;
        }
    }

    // Check if frequencies are all zeros
    if(all_of(freq.begin(), freq.end(), [](int i) { return i == 0; })) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}