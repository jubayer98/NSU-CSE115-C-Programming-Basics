#include <stdio.h>
int main(void)
{
    int i, j, k;
    printf("Please Enter the Value of i: ");
    scanf("%d", &i);
    printf("Please Enter the Value of j: ");
    scanf("%d", &j);
    k = i;
    i = j;
    j = k;
    printf("The swap value of i is: %d", i);
    printf("\nThe swap value of j is: %d", j);
    return 0;
}
