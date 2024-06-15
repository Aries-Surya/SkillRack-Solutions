#include <iostream>
#include <vector>

int main() {
    int M, N;
    std::cin >> M >> N;

    std::vector<std::vector<int>> matrix(M, std::vector<int>(N));

    // Input for matrix
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Rotating the matrix
    std::vector<std::vector<int>> rotatedMatrix(N, std::vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            rotatedMatrix[i][j] = matrix[M - j - 1][i];
        }
    }

    // Printing the rotated matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cout << rotatedMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
