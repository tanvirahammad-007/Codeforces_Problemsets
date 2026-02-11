#include <stdio.h>
#include <string.h>
int main()
{
    char str[105];
    scanf("%s", str);
    int len = strlen(str);
    int counta = 0;
    int countb = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '0')
        {
            countb = 0;
            counta++;
        }
        else if (str[i] == '1')
        {
            counta = 0;
            countb++;
        }
        if (counta == 7 || countb == 7)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}
