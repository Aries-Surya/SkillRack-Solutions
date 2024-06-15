#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string input;
    getline(cin, input);
    
    int mid = input.length()/2;
    cout << input[mid - 1] << input[mid] << input[mid +1];
    
}