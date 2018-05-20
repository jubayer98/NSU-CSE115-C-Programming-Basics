#include <stdio.h>
#define PI 3.1416

float area(void);

int main(void)
{
    float rim_area;
    rim_area = area() - area();
    printf("Thickness is %f", rim_area);
    return 0;
}

float area(void)
{
    float radius, result;
    printf("Please enter the radius: ");
    scanf("%f", &radius);
    result = PI*radius*radius;
    return result;
}
