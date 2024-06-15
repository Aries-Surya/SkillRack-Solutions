#include <iostream>
#include <cstring>
#include <limits>
#include <vector>

using namespace std;

#define MAX_LEN 200

int minDistance(string S, string W1, string W2) {
    vector<string> words;
    int wordCount = 0;

    // Tokenize the input string and store words in a vector
    string token;
    istringstream ss(S);
    while (getline(ss, token, ' ')) {
        words.push_back(token);
        wordCount++;
    }

    int minDist = INT_MAX;

    // Calculate the distances between occurrences of W1 and W2
    for (int i = 0; i < wordCount; i++) {
        if (words[i] == W1) {
            for (int j = 0; j < wordCount; j++) {
                if (words[j] == W2) {
                    int dist = (j > i) ? (j - i) : (i - j);
                    if (dist < minDist) {
                        minDist = dist;
                    }
                }
            }
        }
    }

    return (minDist == INT_MAX) ? -1 : minDist - 1;
}

int main() {
    string S, W1, W2;

    // Read input strings
    getline(cin, S);
    getline(cin, W1);
    getline(cin, W2);

    int distance = minDistance(S, W1, W2);
    cout << distance + 1 << endl;

    return 0;
}