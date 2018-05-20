#include <stdio.h>

int main(void)

{
    int current_age, age_in_days;

    printf("Please enter your current age: ");
    scanf("%d", &current_age);

    age_in_days = current_age*365;

    printf("\n\nMy age in years = %d years\n", current_age);
    printf("\n\nMy age in days = %d days\n", age_in_days);

    return 0;
}
