#include <stdio.h>

void name(void);

int main(void)
{
    name();
    return 0;
}

void name(void)
{
    int n = 0;
    while(n < 10)
    {
        printf("Jubayer Alam\n");
        n++;
    }
}
