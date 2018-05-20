#include<stdio.h>

int isSubSet(int [], int, int [], int);

int main(void)
{
    int arrA[] = { 14, 5, 1, 9};
    int arrB[] = { 2, 9, 3, 14, 5, 6, 1};
    int sizeA = 4, sizeB = 7;

    if(isSubSet(arrA, sizeA, arrB, sizeB))
        printf("A is a subset of B\n");
    else
        printf("A is not a subset of B\n");

    return 0;
}

int isSubSet(int A[], int sA, int B[], int sB)
{
    int i, j, flag;

    for(i = 0; i < sA; i++)
    {
        flag = 0;
        for(j = 0; j < sB; j++)
        {
            if( A[i] == B[j] )
            {
                flag = 1;
                break;
            }
        }
        if( flag == 0 )
            return 0;
    }

    return 1;
}
