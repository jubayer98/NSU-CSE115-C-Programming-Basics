#include<stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);

int main(void)
{
    int x, y, rAdd, rSub, rMul;
    float rDiv;
    printf("First number: ");
    scanf("%d", &x);

    printf("Second number: ");
    scanf("%d", &y);

    rAdd = add(x, y);
    rSub = sub(x, y);
    rMul = mul(x, y);
    rDiv = div(x, y);

    printf("Addition: %d\n", rAdd);
    printf("Subtraction: %d\n", rSub);
    printf("Multiplication: %d\n", rMul);
    printf("Division: %f\n", rDiv);

    return 0;
}

int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

int sub(int a, int b)
{
    int result;
    result = a - b;
    return result;
}

int mul(int a, int b)
{
    int result;
    result = a * b;
    return result;
}

float div(int a, int b)
{
    float result;
    result = (float)a / b;
    return result;
}
