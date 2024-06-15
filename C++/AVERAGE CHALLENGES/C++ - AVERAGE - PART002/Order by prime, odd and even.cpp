#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    vector<int> primes, odds, evens;

    int num;
    while (cin >> num) {
        if (isPrime(num)) {
            primes.push_back(num);
        } else if (num % 2 == 0) {
            evens.push_back(num);
        } else {
            odds.push_back(num);
        }
    }

    sort(primes.begin(), primes.end());
    sort(odds.begin(), odds.end());
    sort(evens.begin(), evens.end());

    for (int num : primes)
        cout << num;
    for (int num : odds)
        cout << num;
    for (int num : evens)
        cout << num;

    return 0;
}