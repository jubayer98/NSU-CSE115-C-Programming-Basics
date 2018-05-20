#include <stdio.h>
#include <math.h>

int fact(int);

int main(void)
{
    int x, n, i;
    float sum = 0;

    printf("Please enter the variable:> ");
    scanf("%d", &x);

    printf("\nPlease enter the number of terms:> ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        sum = sum+(pow(x, i)/fact(i));
    }

    printf("\n\n\nSeries Sum :> %.3f\n\n\n\n\n\n\n", sum);

    return 0;
}

int fact(int n)
{
    int i, f=1;
    for(i=1; i<=n; i++)
    {
        f = f*i;
    }
    return f;
}
