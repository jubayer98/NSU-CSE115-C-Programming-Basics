#include<stdio.h>

void add(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);

int main(void)
{
    int x, y;

    printf("First number: ");
    scanf("%d", &x);

    printf("Second number: ");
    scanf("%d", &y);

    add(x, y);
    sub(x, y);
    mul(x, y);
    div(x, y);

    return 0;
}

void add(int a, int b)
{
    int result;
    result = a + b;
    printf("Addition: %d\n", result);
}

void sub(int a, int b)
{
    int result;
    result = a - b;
    printf("Subtraction: %d\n", result);
}

void mul(int a, int b)
{
    int result;
    result = a * b;
    printf("Multiplication: %d\n", result);
}

void div(int a, int b)
{
    float result;
    result = (float)a / b;
    printf("Division: %f\n", result);
}
