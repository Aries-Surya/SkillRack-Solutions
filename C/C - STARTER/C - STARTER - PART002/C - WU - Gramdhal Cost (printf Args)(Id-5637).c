#include <stdio.h>

int main() {
    int gramdhalweight, cost;
    scanf("%d %d", &gramdhalweight, &cost);

    float cost_per_kg = (float)cost / gramdhalweight;
    float total_cost = cost_per_kg * 25.4;

    printf("%.2f Rupees\n", total_cost);

    return 0;
}
