// 223
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int sum = 0;
    for(int i=1;i<n;i++){
        if(n%i==0) sum+=i;
    }
    printf("%d", sum);
}