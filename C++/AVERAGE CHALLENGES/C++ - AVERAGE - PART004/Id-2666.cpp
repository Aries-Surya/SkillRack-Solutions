#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> matrix(N, vector<int>(N));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < N; i++) {
        sum += matrix[i][i];
        sum += matrix[i][N - 1 - i];
    }

    // If N is odd, one element will be added twice, so we subtract it
    if(N % 2 == 1) {
        sum -= matrix[N/2][N/2];
    }

    cout << sum << endl;

    return 0;
}