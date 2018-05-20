#include<stdio.h>

int isPrime(int n);

int main(void)
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    //i = isPrime(num);

    //(i==1)? printf("Prime!\n"):printf("Not Prime!\n");
    (isPrime(num))? printf("Prime!\n"):printf("Not Prime!\n");


    return 0;
}


int isPrime(int n)
{
    int i;

    for(i = 2; i < n; i++)
        if(n%i == 0)
            return 0;

    return 1;
}
