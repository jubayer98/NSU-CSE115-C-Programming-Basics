#include <stdio.h>

void x(char);

int main(void)
{
    char grade;
    printf("Please enter your grade here: ");
    scanf("%c", &grade);

    x(grade);

    return 0;
}

void x(char g)
{
    switch(g)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'a':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Good\n");
        break;
    case 'b':
        printf("Good\n");
        break;
    case 'C':
        printf("O.K.\n");
        break;
    case 'c':
        printf("O.K.\n");
        break;
    case 'D':
        printf("Poor. The student is on probation.\n");
        break;
    case 'd':
        printf("Poor. The student is on probation.\n");
        break;
    case 'F':
        printf("Poor. The student is on probation.\n");
        break;
    case 'f':
        printf("Poor. The student is on probation.\n");
        break;
    default:
        printf("Invalid letter grade.\n");
        break;
    }
}
