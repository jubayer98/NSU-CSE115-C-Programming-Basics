/*using switch case which will take 2 inputs from the user and return the result
after performing any of four mathematical operations(+ - * /) on them. the user will select the operation to be performed
like by entering + for addition. take inputs in main function and call sub function */

#include <stdio.h>

void cal(int x, int y, char ch);

int main(void)
{
    int num1, num2;
    char ch;
    printf("First Number: \n");
    scanf("%d", &num1);
    printf("Second Number: \n");
    scanf("%d", &num2);

    printf("what do you want now?\n");
    printf("\n + or - or * or / \n");
    scanf("%c", &ch);

    cal(num1, num2, ch);

    return 0;

}

void cal(int x, int y, char ch)
{
    switch(ch)
    {
        case '+':printf("Your result is: %d\n", x+y);
        //return x+y;
        break;
        case '-': printf("Your result is: %d\n", x-y);
        break;
        case '*': printf("Your result is: %d\n", x*y);
        break;
        case '/': printf("Your result is: %d\n", x/y);
        break;
    }
}
