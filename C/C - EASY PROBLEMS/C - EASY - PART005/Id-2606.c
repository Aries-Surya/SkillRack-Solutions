ID - 2605

#include<stdio.h>
#include <stdlib.h>
int main()
{
int n,arr1[1000][1000],sum;
scanf(“%d”,&n);
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
scanf(“%d”,&arr1[i][j]);
sum=arr1[0][0]+arr1[0][n-1]+arr1[n-1][0]+arr1[n-1][n-1];
printf(“%d”,sum);
}
