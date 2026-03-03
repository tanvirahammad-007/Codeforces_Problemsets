#include <stdio.h>
#include <string.h>
int main()
{
    char str[201];
    scanf("%s", str);
    int len = strlen(str);
    char *pstr = str;
    int x = 0, check = -1;
    char opr[4] = "WUB";
    while (x < len)
    {
        if (strncmp(pstr, opr, 3) == 0)
        {
            x += 3;
            pstr += 3;
            check++;
        }
        else
        {
            printf("%c", str[x]);
            x++;
            pstr++;
            check = 0;
            continue;
        }
        if (check == 1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
