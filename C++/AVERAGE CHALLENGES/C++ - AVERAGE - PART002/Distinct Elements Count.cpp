#include <iostream>
#include <vector>

using namespace std;

int main() {
    int l1, l2;
    cin >> l1 >> l2;

    vector<int> arr1(l1), arr2(l2);

    for (int i = 0; i < l1; i++)
        cin >> arr1[i];
    for (int i = 0; i < l2; i++)
        cin >> arr2[i];

    int distACount = 0, distBCount = 0;

    for (int i = 0; i < l1; i++) {
        bool found = false;
        for (int j = 0; j < l2; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if (!found)
            distACount++;
    }

    for (int i = 0; i < l2; i++) {
        bool found = false;
        for (int j = 0; j < l1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if (!found)
            distBCount++;
    }

    cout << distACount + distBCount;

    return 0;
}