#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string input;
    getline(cin, input);
    
    
    stringstream s(input);
    string word;
    int count = 0;
    while(s >> word){
        count ++;
    }
    cout << count;

}