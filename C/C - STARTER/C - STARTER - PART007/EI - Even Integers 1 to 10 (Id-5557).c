#include<stdio.h>

int main() {
    // Loop from 1 to 10
    for(int ctr = 1; ctr <= 10; ctr++)
    {
        // Check if current number (ctr) is even
        if(ctr % 2 == 0)
        {
            printf("%d ", ctr); // Print current even number followed by space
        }
    }
    
    return 0;
}
