#include<stdio.h>

int main()
{
    int num1, num2, sum, result = 0;
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    while(sum > 0)
    {
        result = (sum % 10) + (result * 10);
        sum/=10;
    }
    printf("%d", result);

    return 0;
}
