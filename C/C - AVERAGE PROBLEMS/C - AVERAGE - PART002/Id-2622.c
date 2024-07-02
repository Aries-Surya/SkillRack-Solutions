#include <stdio.h>
#include <stdlib.h>

// Functiontocomparetwointegers
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sortthearrayinascendingorder
    qsort(arr, N, sizeof(int), compare);

    // AddupthefirstMnumbers
    int sum = 0;
    for (int i = 0; i < M; i++)
    {
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}
