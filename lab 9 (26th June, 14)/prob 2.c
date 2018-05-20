#include <stdio.h>

int sum(void);

int main(void)
{
    int total;

    printf("Please Enter Your Integers => \n");

    total = sum();

    printf("Your result is %d", total);


    return 0;
}

int sum(void)
{
    int i, num, sum=0;

    for(i=0; i<10; i++)
    {
        scanf("%d", &num);

        sum = sum+num;
    }
    return sum;

}
