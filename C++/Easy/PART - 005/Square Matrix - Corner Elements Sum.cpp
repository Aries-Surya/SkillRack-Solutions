#include <iostream>
#include <vector>

int corner_elements_sum(const std::vector<std::vector<int>>& matrix) {
    int N = matrix.size();
    return matrix[0][0] + matrix[0][N - 1] + matrix[N - 1][0] + matrix[N - 1][N - 1];
}

int main() {
    int N;
    std::cin >> N;

    std::vector<std::vector<int>> matrix(N, std::vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int corner_sum = corner_elements_sum(matrix);
    std::cout << corner_sum << std::endl;

    return 0;
}
