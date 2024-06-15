#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    cin >> str;

    int spcl = 0, num = 0, upper = 0, lower = 0;

    for (char curr : str) {
        if (isalpha(curr)) {
            if (isupper(curr))
                upper++;
            else
                lower++;
        } else if (isdigit(curr))
            num++;
        else if (curr == '#' || curr == '!' || curr == '_' || curr == '$' || curr == '@')
            spcl++;
    }

    int len = str.length();
    if ((len >= 8 && len <= 25) && spcl >= 1 && upper >= 1 && lower >= 1 && num >= 2)
        cout << "VALID";
    else
        cout << "INVALID";

    return 0;
}