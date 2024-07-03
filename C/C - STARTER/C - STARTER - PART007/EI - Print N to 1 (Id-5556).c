#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read integer input N
    
    // Loop from N down to 1
    for(int ctr = N; ctr >= 1; ctr--)
    {
        printf("%d ", ctr); // Print current value of ctr followed by space
    }
    
    return 0;
}
