#include<stdio.h>
#define N 5

int main(void)
{
    int num[N], i, j, xyz;

    for(i=0; i<N; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i=0; i<N; i++)
    {
        xyz = num[N-1];

        for(j=4; j>=1; j--)
        {
            num[j] = num[j-1];
        }

        num[0] = xyz;

        for(j=0; j<N; j++)
        {
            printf("%d", num[j]);
        }

        printf("\n");
    }
    return 0;
}
