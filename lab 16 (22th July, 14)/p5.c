#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[999];
    int len, i;

    printf("Please Enter Your Name: ");
    gets(name);

    for(i=0; name[i-1]; i++)
    {
        len = i;
    }

    for(i=0; i<len; i++)
    {
        if(name[i] == ' ')
        {
            len--;
        }
    }

    printf("\n\nTotal %d words.\n", len);

    return 0;
}
