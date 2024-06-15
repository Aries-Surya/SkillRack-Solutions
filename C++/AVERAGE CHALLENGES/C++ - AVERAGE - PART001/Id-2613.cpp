#include <iostream>
#include <cstring>

using namespace std;

void reverseWords(char *str) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;
    
    // Reverse the entire string
    while (end > start) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    
    // Reverse each word in the reversed string
    start = 0;
    while (str[start] != '\0') {
        end = start;
        while (str[end] != ' ' && str[end] != '\0') {
            end++;
        }
        
        int wordLen = end - start;
        for (int i = 0; i < wordLen / 2; i++) {
            temp = str[start + i];
            str[start + i] = str[end - i - 1];
            str[end - i - 1] = temp;
        }
        start = end + 1;
    }
}

int main() {
    char str[100];
    cin.getline(str, sizeof(str)); // Read input string using cin.getline()
    reverseWords(str);
    cout << str << endl;
    return 0;
}