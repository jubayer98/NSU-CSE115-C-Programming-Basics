#include <stdio.h>

void function1(int u, int v);
void function2(int *pu, int *pv);

int main(void)
{
    int u = 1;
    int v = 3;

    printf("\nBefore calling function 1: u = %d and v = %d\n\n", u, v);

    function1(u, v);
    printf("\nAfter calling function1: u = %d and v = %d\n\n", u, v);

    printf("\nBefore calling function2: u = %d and v = %d\n\n", u, v);

    function2(&u, &v);
    printf("\nAfter calling function2: u = %d and v = %d\n\n", u, v);
}

void function1(int u, int v)
{
    u = 0;
    v = 0;
    printf("\nWithin function1: u = %d and v = %d\n\n", u, v);
    return 0;
}

void function2(int *pu, int *pv)
{
    *pu = 0;
    *pv = 0;
    printf("\nWithin function2: *pu = %d and *pv = %d\n\n", *pu, *pv);
    return 0;
}
