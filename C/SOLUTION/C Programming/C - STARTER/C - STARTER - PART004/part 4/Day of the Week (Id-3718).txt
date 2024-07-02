#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    // Array of days, index 0 is unused to match 1-based indexing
    const char* days[] = {"", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    // Check if N is within the valid range
    if (N >= 1 && N <= 7) {
        printf("%s\n", days[N]);
    } else {
        printf("Invalid\n");
    }
    
    return 0;
}
