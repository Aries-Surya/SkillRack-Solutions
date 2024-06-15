#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    for(char& c : str) {
        if(islower(c)) {
            c = toupper(c);
        } else if(isupper(c)) {
            c = tolower(c);
        }
    }

    cout << str << endl;

    return 0;
}