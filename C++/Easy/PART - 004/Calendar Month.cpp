#include <bits/stdc++.h>
 
using namespace std;

const string MONTHS[] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};

int main(int argc, char** argv)
{
    string input;
    cin >> input;
    
    string token;
    istringstream ss(input);
    int value;
    for(int i=1;i<=2;i++){
        getline(ss, token, '-');
    }
    value = stoi(token);
    
    cout << MONTHS[value - 1];

}