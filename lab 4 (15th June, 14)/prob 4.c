#include <stdio.h>

int number(void);

int main(void)
{
    int output;
    output = number();
    printf("\n\nYour result is %d\n", output);
    return 0;
}

int number(void)
{
    int a, cube;
    printf("Please enter an integer number here: ");
    scanf("%d", &a);
    cube = a*a*a;
    return cube;
}
