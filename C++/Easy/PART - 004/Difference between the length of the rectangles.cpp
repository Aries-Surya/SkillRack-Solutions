
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    
    long int alenAmount, timAmount, alenArea, timArea;
    cin >> alenAmount >> timAmount;
    cin >>alenArea >> timArea;
    
   
    double alenCourt = (alenAmount / 5.0) / alenArea;
    double timCourt = (timAmount / 5.0) / timArea;
    cout << fixed << setprecision(2) << abs(alenCourt - timCourt);

}