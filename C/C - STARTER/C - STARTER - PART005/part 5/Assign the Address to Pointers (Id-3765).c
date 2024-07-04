#include<stdio.h>

void main() {
    int x, y, z;
    int *ptr1, *ptr2, *ptr3; // Declare pointers

    // Read input values for x, y, z
    scanf("%d %d %d", &x, &y, &z);

    // Assign addresses to pointers
    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &z;

    // Print the values using pointers
    printf("%d %d %d", *ptr1, *ptr2, *ptr3);
}
