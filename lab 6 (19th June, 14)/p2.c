#include<stdio.h>

int data(int);

int main(void)
{
    int number;
    printf("Please enter your number here: ");
    scanf("%d", &number);
    int grade = data(number);

    return 0;
}

int data(int a)
{
    if(a >= 90)
    {
        printf("Your Grade is A.\n");
    }

    else if(a >= 80)
    {
        printf("Your Grade is B.\n");
    }

    else if(a >= 70)
    {
        printf("Your Grade is C");
    }

    else if(a >= 60)
    {
        printf("Your Grade is D");
    }

    else
    {
        printf("Your Grade is F");
    }
}
