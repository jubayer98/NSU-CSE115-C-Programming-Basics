#include <stdio.h>

float outer_area(float);
float inner_area(float);

int main(void)
{
    float outer_radius, inner_radius, thickness;
    printf("Please enter the outer and inner radius of the circle: \n");
    scanf("%f %f", &outer_radius, &inner_radius);
    thickness = outer_area(outer_radius) - inner_area(inner_radius);
    printf("Your result is: %.2f", thickness);

    return 0;
}

float outer_area(float x)
{
    float result = 3.1416*x*x;
    return result;
}

float inner_area(float y)
{
    float result = 3.1416*y*y;
    return result;
}
