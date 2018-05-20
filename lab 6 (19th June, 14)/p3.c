#include <stdio.h>

void data1(void);
void data2(void);
void data3(void);

int main(void)
{
    int a;
    printf("Please enter a number below.\n");
    scanf("%d", &a);

    if(a%3 == 0 && a%5 == 0)
        data1();
    else if(a%3 == 0 || a%5 == 0)
        data2();
    else
        data3();

    return 0;

}

void data1(void)
{
    printf("The number is divisible by both 3 and 5.\n");
}

void data2(void)
    {
        printf("The number is divisible either 3 or 5.\n");
    }

void data3(void)
    {
        printf("It's not divisible by 3 or 5.\n");
    }
