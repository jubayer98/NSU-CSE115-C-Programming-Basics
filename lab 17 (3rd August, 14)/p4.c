#include <stdio.h>

int main(void)
{
    char str[30], *c;
    int l = 0;

    printf("Enter the STRING: ");
    gets(str);

    c = str;

    while(*c != '\0')
    {
        c++;
        l++;
    }

    printf("\n%d\n\n\n", l);

    return 0;
}
