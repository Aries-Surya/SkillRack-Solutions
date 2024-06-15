#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Sort the array in ascending order
    sort(arr.begin(), arr.end());

    // Add up the first M numbers
    int sum = 0;
    for (int i = 0; i < M; i++) {
        sum += arr[i];
    }

    cout << sum;

    return 0;
}