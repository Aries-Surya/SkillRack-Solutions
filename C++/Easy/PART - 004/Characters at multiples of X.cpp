#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string input;
    int n;
    getline(cin, input);
    cin >> n;
    for(int i=1;i<=input.length(); i++){
        if (i % n == 0) cout << input[i-1];
    }

}