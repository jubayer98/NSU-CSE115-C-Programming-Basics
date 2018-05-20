#include<stdio.h>

int isPrime(int n);

int main(void)
{
    int num, i;
    printf("Enter a limit: ");
    scanf("%d", &num);

    //i = isPrime(num);

    //(i==1)? printf("Prime!\n"):printf("Not Prime!\n");
    for(i = 2; i <= num; i++)
        (isPrime(i))? printf("%d\n", i):i;


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
