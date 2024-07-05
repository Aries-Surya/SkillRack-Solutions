#include<stdio.h>

int main()
{
    int X, ctr = 0;
    scanf("%d", &X);
    int distanceCovered = 0, jumpDistance = 1;
    while(distanceCovered < X)
    {
        distanceCovered += jumpDistance;
        jumpDistance += 9;
        ctr++;
    }
    printf("%d", ctr);
}