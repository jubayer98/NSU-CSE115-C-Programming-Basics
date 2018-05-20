#include <stdio.h>
int main(void)
{
    int radius;
    float pi = 3.14;
    printf("Please enter a positive numeric value for radius: ");
    scanf("%d", &radius);
    float circumference = 2*pi*radius;
    printf("The circumference of circle is: %.2f", circumference);
    return 0;
}
