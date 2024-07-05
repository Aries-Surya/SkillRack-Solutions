#include<stdio.h>

int main()
{
    int amount, numberOfDays = 0, withdrawAmount;
    scanf("%d", &amount);
    while(amount > 0)
    {
        withdrawAmount = (amount / 2 > 0 ) ? (amount / 2) : 1;
        while(amount % withdrawAmount != 0)
        {
            withdrawAmount--;
        }
        amount -= withdrawAmount;
        numberOfDays++;
    }
    printf("%d", numberOfDays);
    return 0;
}