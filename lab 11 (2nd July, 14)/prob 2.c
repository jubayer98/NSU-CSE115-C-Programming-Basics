#include <stdio.h>
#include <math.h>

int fact(int);

int main(void)
{
    int x, n, i;
    float sum = 0;

    printf("Please Enter The Variable >> ");
    scanf("%d", &x);

    printf("\nPlease Enter The Number of Terms >> ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        sum = sum + ((pow(-1, i))*(pow(x, 2*i)/fact(2*i)));
    }

    printf("\n\n\n\nSeries Sum >>> %.3f\n\n\n\n\n\n\n\n", sum);

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
