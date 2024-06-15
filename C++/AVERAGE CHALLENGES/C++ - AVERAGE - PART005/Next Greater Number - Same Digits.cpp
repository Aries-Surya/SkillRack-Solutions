#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string str;
    std::cin >> str;

    int l = str.length();
    std::vector<int> a(l);
    for (int i = 0; i < l; ++i)
        a[i] = str[i] - '0';

    for (int i = l - 1; i > 0; --i) {
        for (int j = i - 1; j >= 0; --j) {
            if (a[i] > a[j]) {
                std::swap(a[i], a[j]);
                std::sort(a.begin() + j + 1, a.end());
                break;
            }
        }
    }

    for (int i = 0; i < l; ++i)
        std::cout << a[i];
}
