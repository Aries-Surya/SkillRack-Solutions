// 2671
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int start = (n*(n-1)/2) + n;
    
    for(int i=1; i<=n;i++){
        int curr = start;
        for(int j=1;j<=n-(i-1);j++){
            printf("%d ", curr);
            curr -= n - (j-1);
        }
        start--;
        printf("\n");
    }
}