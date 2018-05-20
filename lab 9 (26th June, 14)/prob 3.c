#include <stdio.h>

void condition(int);

int main(void)
{
    int i=0, p_n;
    while(i < 5)
        {
            printf("\nEnter Player Number: ");
            scanf("%d", &p_n);
            condition(p_n);
            i++;
        }
    return 0;
}

void condition(int x)
{
    if(x>=56 && x<=78)
    {
        printf("\nYOU WIN\n");
    }
    else
    {
        printf("\nYOU LOSE\n");
    }
}
