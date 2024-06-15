#include <iostream>
#include <vector>
#include <limits.h>

int main() {
    std::vector<int> arr;
    int num;
    while (std::cin >> num) {
        arr.push_back(num);
    }

    int minCount = 0, minElem = INT_MIN;
    int ind = arr.size();

    for (int i = 0; i < ind; i++) {
        int count = 0;
        for (int j = i; j < ind; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > minCount) {
            minCount = count;
            if (minElem <= arr[i]) {
                minElem = arr[i];
            }
        }
    }

    std::cout << minElem << std::endl;

    return 0;
}
