#include <stdio.h>

int c_p_i(int);

int main(void)
{
    int num, res;
    printf("Please enter a positive integer here: ");
    res = c_p_i(num);
    printf("\nYou Total Enter %d positive integers.\n", res);
    return 0;

}

int c_p_i(int num)
{
    int i = 0;
    do
    {
        scanf("%d", &num);
        i++;
    }
    while(num > 0);
    return i-1;
}
