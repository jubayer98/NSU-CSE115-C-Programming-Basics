#include <stdio.h>

void check_prime(int);

int main(void)
{
    int a, i=0, num;
    printf("Please enter how many numbers you want to enter\n");
    scanf("%d", &a);
    printf("Now enter the integers you want to check\n");
    while(i < a)
    {
        scanf("%d", &num);
        check_prime(num);
        i++;
    }
    return 0;
}

void check_prime(int num)
{
    int a=2;
    while(a <= num-1)
    {
        if(num%a == 0)
        {
            printf("\nNot Prime\n");
            break;
        }
        a++;
    }
    if(a == num)
    {
        printf("\nPrime\n");
    }

}
