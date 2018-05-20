#include <stdio.h>

int sum(int n);

int main(void)
{
    int num, add;
    printf("Enter a positive integer:\n");
    scanf("%d", &num);
    add = sum(num);
    printf("sum = %d", add);
    return 0;
}

int sum(int n)
{
    if(n==0)
        return n;
    else
        return (n+sum(n-1));
}
