#include <stdio.h>
int main(void)
{
    int radius;
    float pi = 3.14;
    printf("Please enter a positive numeric value for radius: ");
    scanf("%d", &radius);
    float area = pi*radius*radius;
    printf("The area is: %.2f", area);
    return 0;
}
