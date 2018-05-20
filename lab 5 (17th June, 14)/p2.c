#include <stdio.h>

int square(int);
int cube(int);

int main(void)
{
    int num1, num2, num3, summation;

    printf("Please enter the three integer number serially here: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    summation = cube(num1)+square(num2)+num3;
    printf("the result is: %d", summation);

    return 0;
}

int cube(x)
{
    int result = x*x*x;
    return result;
}

int square(y)
{
    int result = y*y;
    return result;
}
