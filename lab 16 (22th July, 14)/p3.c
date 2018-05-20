#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[4], b[4], d[4];

    int c = 0;

    printf("Enter the first string:\n");
    scanf("%s", a);
    printf("Enter the second string:\n");
    scanf("%s", b);

    while(a[c]==b[c])
    {
        if(a[c]=='\0' || b[c]=='\0')
        {
            break;
        }
        c++;
    }

    if(a[c]=='\0' && b[c]=='\0')
        {
            printf("same");
        }
    else
    {
        for(c=0; c<3; c++)
        {
            d[c]=a[c];
            a[c]=b[c];
            b[c]=d[c];
        }
        printf("String1: %s\nString2: %s", a, b);
    }
    return 0;
}
