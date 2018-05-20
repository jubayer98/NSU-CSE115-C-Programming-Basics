#include <stdio.h>
#define N 6

int main(void)
{
    double data[N], mean, sum, sub[N];
    int i;

    printf("Input Array:\t");

    for(i=0; i<N; i++)
    {
        scanf("%lf", &data[i]);

        sum = sum + data[i];
        mean = sum/N;

    }

    printf("\nMean: %.2lf", mean);
    printf("\nOutput Array:\t");

    for(i=0; i<N; i++)
    {
        sub[i] = data[i] - mean;
        printf("%.2lf\t", sub[i]);
    }

    printf("\n");

    return 0;
}
