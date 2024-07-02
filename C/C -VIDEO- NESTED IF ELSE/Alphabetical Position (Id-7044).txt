#include<stdio.h>

int main()
{
    char X, Y, Z;
    scanf("%c %c %c", &X, &Y, &Z);
    if((X-'a'+1)%2 != 0 && (Y-'a'+1)%2 == 0 && (Z-'a'+1)%2 != 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}


