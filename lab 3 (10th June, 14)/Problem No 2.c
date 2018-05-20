#include <stdio.h>
int main(void)
{
    float num1, num2;
    float addition, subtraction, multiplication, division;

    printf("Please enter the first integer: ");
    scanf("%f", &num1);
    printf("Please enter the second integer: ");
    scanf("%f", &num2);

    addition = num1+num2;
    subtraction = num1-num2;
    multiplication = num1*num2;
    division = num1/num2;

    printf("\n\nThe results are: \n");

    printf("Addition: %.2f \nSubtraction: %.2f \nMultiplication: %.2f \nDivision: %.2f \n", addition, subtraction, multiplication, division);
    printf("\n\nThank You :)");

    return 0;
}
