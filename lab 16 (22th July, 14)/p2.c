#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[4], str2[4], str3[4];

    gets(str1);
    gets(str2);

    if(strcmp(str1, str2))
    {
        strcpy(str3, str1);
        strcpy(str1, str2);
        strcpy(str2, str3);

        printf("\n\nOutput\n");
        printf("String 1: %s\n", str1);
        printf("String 2: %s\n", str2);
    }

    else
    {
        printf("\nThe strings are same\n");
    }

    return 0;
}
