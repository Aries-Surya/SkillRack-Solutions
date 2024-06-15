#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    char A, B;
    int count = 0;

    // Read the input
    cin >> S;
    cin >> A >> B;

    // Traverse the string and check for occurrences
    for (int i = 0; i < S.length() - 1; i++) {
        if (S[i] == A && S[i+1] == B) {
            count++;
        }
    }

    // Print the count
    cout << count << endl;

    return 0;
}