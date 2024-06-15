#include <bits/stdc++.h>
 
using namespace std;

struct Input{
    int distance;
    int time;
};

Input calculate(const string &input){
    int distance = 0;
    int time = 0;
    bool done = false;
    for(const char &ch: input){
        if(ch == '@'){
            done = true;
        }
        
        else if (!done){
            distance = (distance * 10) + int(ch - '0');
        }else{
            time = (time * 10) + int(ch - '0');
        }
    }
    
    return { distance , time};
}

int main(int argc, char** argv)
{
    string input, splitted;
    
    getline(cin, input);
    stringstream stream(input);
    int distance = 0;
    int time = 0;
    while(getline(stream, splitted, ' ')){
        Input result = calculate(splitted);
        distance += result.distance;
        time += result.time;
    }
    
    cout << fixed << setprecision(2) << (float) distance / time << " kmph";
    
    
    
}