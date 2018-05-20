#include <stdio.h>
#define pi 3.1416

void function(int radius, float *area, float *circumference);


int main(void)
{
    int radius;
    float area, circumference;

    printf("Please Enter the radius of a circle:\n");
    scanf("%d", &radius);

    function(radius, &area, &circumference);
    printf("\n\nThe Area is %.2f\n", area);
    printf("The Circumference is %.2f\n\n", circumference);

    return 0;

}

void function(int radius, float *area, float *circumference)
{
    *area = pi*radius*radius;
    *circumference = 2*pi*radius;

    return 0;
}
