#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<int>> bigMatrix(N, std::vector<int>(N));
    std::vector<std::vector<int>> smallMatrix(M, std::vector<int>(M));

    // Input for big matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> bigMatrix[i][j];
        }
    }

    // Input for small matrix
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> smallMatrix[i][j];
        }
    }

    // Search for small matrix in big matrix
    bool found = false;
    for (int i = 0; i <= N - M; ++i) {
        for (int j = 0; j <= N - M; ++j) {
            bool match = true;
            for (int p = 0; p < M; ++p) {
                for (int q = 0; q < M; ++q) {
                    if (bigMatrix[i + p][j + q] != smallMatrix[p][q]) {
                        match = false;
                        break;
                    }
                }
                if (!match) break;
            }
            if (match) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        std::cout << "TRUE\n";
    } else {
        std::cout << "FALSE\n";
    }

    return 0;
}
