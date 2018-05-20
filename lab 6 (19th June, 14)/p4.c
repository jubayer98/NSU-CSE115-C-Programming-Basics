#include <stdio.h>

float add(float, float);
float sub(float, float);
float multi(float, float);
float div(float, float);

int main(void)
{
    float num1, num2, result;
    int choice;
    printf("Please Enter the First Number: ");
    scanf("%f", &num1);
    printf("Please Enter the Second Number: ");
    scanf("%f", &num2);

    printf("Please choose one option from below:\n1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\n");
    scanf("%d", &choice);

    if(choice == 1)
    {
        result = add(num1, num2);
        printf("Your result is: %.2f", result);
    }

    else if(choice == 2)
    {
        result = sub(num1, num2);
        printf("Your result is: %.2f", result);
    }

    else if(choice == 3)
    {
        result = multi(num1, num2);
        printf("Your result is: %.2f", result);
    }
    else if(choice == 4)
    {
        result = div(num1, num2);
        printf("Your result is: %.2f", result);
    }

    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}

float add(float a, float b)
{
    float c = a+b;
    return c;
}

float sub(float a, float b)
{
    float c = a-b;
    return c;
}

float multi(float a, float b)
{
    float c = a*b;
    return c;
}

float div(float a, float b)
{
    float c = a/b;
    return c;
}
