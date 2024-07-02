#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int countSubPalindromes(char *str) {
    int count = 0;
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (isPalindrome(str, i, j))
                count++;
        }
    }
    
    return count;
}

int main() {
    char str[201];
    scanf("%s", str);

    int count = countSubPalindromes(str);

    printf("%d\n", count);

    return 0;
}
