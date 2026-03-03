#include <stdio.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n + 5];
    scanf("%s", str);
    if (n < 26)
    {
        printf("NO\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        str[i] = tolower(str[i]);
    }
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int y = str[i] - 'a';
        freq[y] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
