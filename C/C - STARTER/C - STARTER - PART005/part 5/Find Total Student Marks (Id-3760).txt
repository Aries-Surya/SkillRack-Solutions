#include <stdio.h>

struct studentmarks {
    int sub1_mark;
    int sub2_mark;
    int sub3_mark;
};

int main() {
    struct studentmarks marks;

    // Reading input marks
    scanf("%d %d %d", &marks.sub1_mark, &marks.sub2_mark, &marks.sub3_mark);

    // Calculating total marks
    int total_marks = marks.sub1_mark + marks.sub2_mark + marks.sub3_mark;

    // Printing the total marks
    printf("%d\n", total_marks);

    return 0;
}
