#include <stdio.h>

int main(void)

{
    int current_year, birth_year, age;

    printf("Please enter the current year: ");
    scanf("%d", &current_year);
    printf("Please enter the year you were born: ");
    scanf("%d", &birth_year);

    age = current_year-birth_year;

    printf("\n\nCurrent year: 2014\n\nMy age = %d years.\n\n", age);

    return 0;
}
