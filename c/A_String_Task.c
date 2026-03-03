#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[105];
    scanf("%s", str);
    int len = strlen(str);
    char newStr[2*105 +1];
    int x = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'I' || str[i] == 'E' ||
            str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'y' || str[i] == 'Y')
        {
            continue;
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = tolower(str[i]);
        newStr[x++] = '.';
        newStr[x++] = str[i];
    }
    newStr[x] = '\0';
    printf("%s\n", newStr);
}
