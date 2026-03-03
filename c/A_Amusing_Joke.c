#include <stdio.h>
#include <string.h>

int main()
{
    char name[100], host[100], str[100];
    int freq[26] = {0};
    scanf("%s %s %s", name, host, str);
    int len1 = strlen(name);
    int len2 = strlen(host);
    int len3 = strlen(str);
    if (len1 + len2 != len3)
    {
        printf("NO\n");
        return 0;
    }
    for (int i = 0; i < len1; i++)
        freq[name[i] - 'A']++;
    for (int i = 0; i < len2; i++)
        freq[host[i] - 'A']++;
    for (int i = 0; i < len3; i++)
        freq[str[i] - 'A']--;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}