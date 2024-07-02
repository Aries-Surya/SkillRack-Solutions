// #include <stdio.h>
// #include <string.h>

// int isVowel(char ch) {
//     switch(ch) {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             return 1;
//         default:
//             return 0;
//     }
// }

// int main() {
//     char S[51];
//     scanf("%s", S);

//     int len = strlen(S);

//     // Reverse the string
//     for (int i = 0; i < len / 2; i++) {
//         char temp = S[i];
//         S[i] = S[len - i - 1];
//         S[len - i - 1] = temp;
//     }

//     // Remove vowels
//     int i, j;
//     for (i = j = 0; i < len; i++) {
//         if (!isVowel(S[i])) {
//             S[j++] = S[i];
//         }
//     }
//     S[j] = '\0';

//     printf("%s\n", S);

//     return 0;
// }
