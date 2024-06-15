#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string str1, str2;
    cin >> str1 >> str2;
    
    int len1 = str1.length();
    int len2 = str2.length();
    int i, j=0, index;
    char first, ch;
    for(i=0;i<len1; i++){
        if((str1[i] == str2[0]) && (str1[i+1] == str2[1]) && str1[i+2] == str2[2]) index = i;
        if (str1[i] == str2[j]){
            j++;
            if (i == len1 - 1) break;
        }else{
            j = 0;
        }
    }
    printf("%s", &str1[index]);
}