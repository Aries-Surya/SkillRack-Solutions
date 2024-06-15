#include <iostream>
#include <vector>
#include <cmath>

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

    int sumDiag1 = 0, sumDiag2 = 0;
    
    for(int i = 0; i < N; i++) {
        sumDiag1 += matrix[i][i];
        sumDiag2 += matrix[i][N - 1 - i];
    }

    int absoluteDifference = abs(sumDiag1 - sumDiag2);

    cout << absoluteDifference << endl;

    return 0;
}