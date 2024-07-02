#include<stdio.h>

// Function to find the smaller of two numbers
int min(int num1, int num2) {
    if (num1 <= num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    // Calling the function to find the smaller number
    int min_num = min(num1, num2);
    
    // Printing the smaller number
    printf("%d\n", min_num);
    
    return 0;
}
