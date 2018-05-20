#include <stdio.h>
#define total_marks 80.00

float number(void);

int main(void)
{
    float x;
    x = number();
    printf("\n\nYou got %.2f%% of total marks\n", x);
    return 0;
}

float number(void)
{
    float given_marks, percentage;
    printf("Please Enter your Total Marks: ");
    scanf("%f", &given_marks);
    percentage = (given_marks/total_marks)*100;
    return percentage;
}
