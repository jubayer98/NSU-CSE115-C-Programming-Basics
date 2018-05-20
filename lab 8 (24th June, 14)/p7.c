#include <stdio.h>

void odd(void);

int main(void)
{
    odd();
    return 0;
}

void odd(void)
{
    int num = 0;

    while(num < 10)
    {
        if(num%2 != 0)
            {
            printf("%d ", num);
            }
        num++;
    }

}
