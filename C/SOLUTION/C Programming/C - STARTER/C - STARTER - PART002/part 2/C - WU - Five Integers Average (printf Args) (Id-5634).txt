#include <stdio.h>

int main() {
    int maths, english, science, social, language;
    scanf("%d %d %d %d %d", &english, &science, &social, &language, &maths);

    int total = maths + english + science + social + language;
    float average = total / 5.0;

    printf("%.2f%%\n", average);

    return 0;
}
