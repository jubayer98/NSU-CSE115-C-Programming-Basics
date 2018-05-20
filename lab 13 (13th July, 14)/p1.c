#include <stdio.h>
#define N 6
int main(void)
{
    int number[N], i;
    char grade[N];

    printf("Please Enter The Marks of Student: ");
    printf("\n\nInput Array:\t");

    for(i=0; i<N; i++)
    {
        scanf("%d", &number[i]);

        if(number[i] > 90)
            grade[i] = 'A';
        else if(number[i]>80 && number[i]<90)
            grade[i] = 'B';
        else if(number[i]>70 && number[i]<80)
            grade[i] = 'C';
        else if(number[i]>60 && number[i]<70)
            grade[i] = 'D';
        else if(number[i] < 60)
            grade[i] = 'F';
    }

    printf("\nOutput Array:\t");

    for(i=0; i<N; i++)
    {
        printf("%c\t", grade[i]);
    }
    printf("\n\n");

    return 0;
}
