#include <stdio.h>
#include <string.h>
int main()
{
    char name[105];
    scanf("%s", name);
    int len = strlen(name);
    int track[26] = {0};
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        int x = name[i] - 'a';
        if (!track[x])
        {
            track[x] = 1;
            count++;
        }
    }
    if (count % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
