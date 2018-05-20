#include <stdio.h>

float cm(void);

int main(void)
{
    float x;
    x = cm();
    printf("\n\nYour height in centimeter: %f\n", x);
    return 0;
}

float cm(void)
{
    float a;
    printf("Please enter your height in inches: ");
    scanf("%f", &a);
    float cent = 2.54*a;
    return cent;
}
