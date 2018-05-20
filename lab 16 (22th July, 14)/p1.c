#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[12], c;

    gets(str);
    printf("\n%s", str);

    c = str[0];
    c -= 32;

    str[0] = c;
    printf("\n%s", str);

    str[6] = '\0';
    printf("\n%s", str);

    return 0;
}
