#include <stdio.h>
#include <math.h>

int number(int x, int y);

int main(void)
{
    int num1, num2, power;
    printf("Please enter the two integer number here: \n");
    scanf("%d %d", &num1, &num2);
    power = number(num1, num2);
    printf("Your result is: %d", power);
    return 0;
}

int number(int x, int y)
{
    int result;
    result = pow(x, y);
    return result;
}
