#include <iostream>
#include <cstring>

using namespace std;

void decryptMessage(string message, int columns) {
    int len = message.length();
    int rows = len / columns;
    char decrypted[rows][columns];
    int k = 0;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < columns; j++) {
                decrypted[i][j] = message[k++];
            }
        } else {
            for (int j = columns - 1; j >= 0; j--) {
                decrypted[i][j] = message[k++];
            }
        }
    }

    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++) {
            cout << decrypted[i][j];
        }
    }
    cout << endl;
}

int main() {
    string message;
    int columns;
    cin >> message >> columns;
    decryptMessage(message, columns);
    return 0;
}