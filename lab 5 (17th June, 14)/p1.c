#include <stdio.h>

int cube(int);
int square(int);

int main(void)
{
    int number;
    printf("Please enter an integer number here: ");
    scanf("%d", &number);
    int cube_result = cube(number);
    int square_result = square(number);
    printf("\n\nThe cube of the number is: %d\nThe square of the number is %d\n", cube_result, square_result);

    return 0;
}

int cube(x)
{
    int result = x*x*x;
    return result;
}

int square(x)
{
    int result = x*x;
    return result;
}
