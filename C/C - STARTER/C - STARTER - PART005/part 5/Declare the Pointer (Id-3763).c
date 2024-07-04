#include<stdio.h>

void main()
{
    int num;
    scanf("%d", &num);

    // Declare a pointer variable ptr of type int*
    int *ptr;

    // Assign ptr the address of num
    ptr = &num;

    // Print the value stored at the address pointed to by ptr
    printf("%d\n", *ptr);
}
