#include <stdio.h>
#include <string.h>
int main()
{
    char s1[105], s2[105];
    scanf("%s %s", s1, s2);
    int n2 = strlen(s2);
    char x[n2 + 1];
    int n = n2 - 1;
    for (int i = 0; i < n2; i++)
    {
        x[i] = s2[n--];
    }
    x[n2] = '\0';
    if (strcmp(s1, x) == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
