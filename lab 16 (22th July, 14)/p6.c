#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[999], str2[999];
    int i;

    printf("Please Enter First String: ");
    gets(str1);
    printf("Please Enter Second String: ");
    gets(str2);

    for(i=0; str1[i]!='\0'; i++)
    {
        printf("%c", str1[i]+1);
    }

    printf("\n");

      for(i=0; str2[i]!='\0'; i++)
    {
        printf("%c", str2[i]+1);
    }

    return 0;
}
