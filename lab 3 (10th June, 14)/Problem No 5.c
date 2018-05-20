#include <stdio.h>

int main(void)

{
    int num1, num2, num3, num4;
    float average;

    printf("Please enter the first integer: ");
    scanf("%d", &num1);
    printf("Please enter the second integer: ");
    scanf("%d", &num2);
    printf("Please enter the third integer: ");
    scanf("%d", &num3);
    printf("Please enter the fourth integer: ");
    scanf("%d", &num4);

    average = (float)(num1+num2+num3+num4)/4;

    printf("\n\nThe average of the four numbers is: %.2f\n", average);
    printf("\n\nThank You!\n");

    return 0;
}
