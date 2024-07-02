#include <stdio.h>

int main() {
    double ca, ct, wa, wt;
    scanf("%lf %lf", &ca, &ct);
    scanf("%lf %lf", &wa, &wt);

    double area_alen = ca / 5;
    double length_alen = area_alen / wa;

    double area_tim = ct / 5;
    double length_tim = area_tim / wt;

    double difference = length_tim - length_alen;

    printf("%.2lf", difference);

    return 0;
}
