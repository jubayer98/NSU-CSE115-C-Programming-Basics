#include <stdio.h>

int main(void)

{
    int courses, fees_per_course;
    float total_fees;

    printf("How many courses you took this semester?\n");
    scanf("%d", &courses);
    printf("\n\nFees per course is?\n");
    scanf("%d", &fees_per_course);

    total_fees = courses*fees_per_course;

    printf("\n\nI have taken %d courses this semester.\n", courses);
    printf("\n\nThe total fees I have to pay is = %.2f taka\n\n\n", total_fees);

    return 0;
}
