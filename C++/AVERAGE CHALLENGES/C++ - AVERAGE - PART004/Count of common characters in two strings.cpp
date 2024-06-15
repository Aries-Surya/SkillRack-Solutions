#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int count = 0;

    for (size_t i = 0; i < s1.length(); i++) {
        for (size_t j = 0; j < s2.length(); j++) {
            if (s1[i] == s2[j]) {
                count++;
                s1[i] = '*';
                s2[j] = '*';
                break;
            }
        }
    }

    cout << count;

    return 0;
}