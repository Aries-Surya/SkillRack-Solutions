#include <bits/stdc++.h>
 
using namespace std;

char firstRepChar(const string &s){
    int length = s.length();
    for(int i=0;i<length;i++){
        char temp = s[i];
        if (temp != ' '){
            for(int j=i+1;j<length;j++){
                if (temp == s[j]) return temp;
            }
        }
    }
    return s[0];
}

int main(int argc, char** argv)
{
    string input;
    getline(cin, input);
    
    cout << firstRepChar(input);
    
}