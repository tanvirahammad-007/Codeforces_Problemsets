#include <stdio.h>
#include <string.h>
int main()
{
    char a[105];
    char b[105];
    scanf("%s %s", a, b);
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        if (a[i] == b[i])
            printf("0");
        else
            printf("1");
    }
    printf("\n");
}
