#include <stdio.h>

int main(void)
{
    int num1, num2, *n1, *n2, sum;

    printf("Please Enter Two Integers:\n");
    scanf("%d %d", &num1, &num2);

    n1 = &num1;
    n2 = &num2;

    sum = *n1 + *n2;

    printf("\nResult is: %d\n", sum);

    return 0;
}
