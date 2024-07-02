#include <stdio.h>

int main() {
    int hh, mm, ss;
    scanf("%d:%d:%d", &hh, &mm, &ss); // Read input in hh:mm:ss format

    printf("Hours: %d\n", hh);     // Print hours
    printf("Minutes: %d\n", mm);   // Print minutes
    printf("Seconds: %d\n", ss);   // Print seconds

    return 0;
}
