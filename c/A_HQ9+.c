#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}