#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* output = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    
    output[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        output[i] = output[i - 1] * nums[i - 1];
    }
    
    int product = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        output[i] = output[i] * product;
        product *= nums[i];
    }
    
    return output;
}

int main() {
    int numsSize;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &numsSize);

    int* nums = (int*)malloc(numsSize * sizeof(int));

    printf("Enter %d numbers separated by spaces:\n", numsSize);
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    int returnSize;
    
    int* output = productExceptSelf(nums, numsSize, &returnSize);
    
    printf("Output: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", output[i]);
    }
    
    free(output);
    free(nums);
    
    return 0;
}
