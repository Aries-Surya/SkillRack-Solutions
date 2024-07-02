#include<stdio.h>

// Function to find the largest among three numbers
int largest(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Calling the function to find the largest number
    int max_num = largest(num1, num2, num3);
    
    // Printing the largest number
    printf("%d\n", max_num);
    
    return 0;
}
