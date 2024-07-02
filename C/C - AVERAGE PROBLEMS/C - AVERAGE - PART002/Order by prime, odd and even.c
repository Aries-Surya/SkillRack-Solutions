#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int primes[20], odds[20], evens[20];
    int p = 0, o = 0, e = 0;

    int num;
    while (scanf("%d", &num) != EOF)
    {
        if (isPrime(num))
        {
            primes[p++] = num;
        }
        else if (num % 2 == 0)
        {
            evens[e++] = num;
        }
        else
        {
            odds[o++] = num;
        }
    }

    qsort(primes, p, sizeof(int), compare);
    qsort(odds, o, sizeof(int), compare);
    qsort(evens, e, sizeof(int), compare);

    for (int i = 0; i < p; i++)
        printf("%d", primes[i]);
    for (int i = 0; i < o; i++)
        printf("%d", odds[i]);
    for (int i = 0; i < e; i++)
        printf("%d", evens[i]);

    return 0;
}
