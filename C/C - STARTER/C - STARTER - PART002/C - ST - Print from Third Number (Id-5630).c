#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N], index;

    // Read N numbers into the array
    for(index = 0; index < N; index++) {
        scanf("%d", &arr[index]);
    }

    // Print numbers from the third to the Nth number
    for(index = 2; index < N; index++) {
        printf("%d", arr[index]);
        if (index < N - 1) {
            printf(" ");  // Print a space after each number except the last one
        }
    }
    
    printf("\n");  // Print a newline character at the end

    return 0;
}
