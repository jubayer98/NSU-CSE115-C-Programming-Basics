#include<stdio.h>
#include<math.h>

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

    if(n%2 == 0)
        return 0;
    for(i = 3; i <= sqrt(n); i+=2)
        if(n%i == 0)
            return 0;

    return 1;
}
