#include <stdio.h>

void number(int);

int main(void)
{
    int choice;
    printf("Enter an integer number: ");
    scanf("%d", &choice);
    number(choice);
    return 0;
}

void number(int a)
{
    switch(a)
    {
        case 1: printf("\nOne\n");
            break;
        case 2: printf("\nTwo\n");
            break;
        case 3: printf("\nThree\n");
            break;
        case 4: printf("\nFour\n");
            break;
        case 5: printf("\nFive\n");
            break;
        case 6: printf("\nSix\n");
            break;
        case 7: printf("\nSeven\n");
            break;
        case 8: printf("\nEight\n");
            break;
        case 9: printf("\nNine\n");
            break;
        case 10: printf("\nTen\n");
            break;
        default:
            printf("\nUnknown\n");
    }
}
