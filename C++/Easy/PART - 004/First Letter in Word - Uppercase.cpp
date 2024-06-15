#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    getline(cin, s);
    
    for(int i=0; s[i]!='\0';i++){
        if (i ==0){
            cout <<(char) toupper(s[i]);
            continue;
        }
        if (s[i] == ' '){
            if (s[i+1] != ' '){
                cout << " " <<(char) toupper(s[i+1]);
                i +=1;
            }else {
                cout << " ";
            }
        }else cout << s[i];
    }
}