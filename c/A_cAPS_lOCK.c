#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int first = 1;
    int upper = 1;
    for (int i = 0; i < len; i++)
    {
        if (!isupper(str[i]))
        {
            upper = 0;
            break;
        }
    }
    for (int i = 1; i < len; i++)
    {
        if (!isupper(str[i]))
        {
            first = 0;
            break;
        }
    }
    if (upper)
    {
        for (int i = 0; i < len; i++)
            printf("%c", tolower(str[i]));
        printf("\n");
    }
    else if (!upper && first)
    {
        printf("%c", toupper(str[0]));
        for (int i = 1; i < len; i++)
            printf("%c", tolower(str[i]));
        printf("\n");
    }
    else
    {
        printf("%s\n", str);
    }
}