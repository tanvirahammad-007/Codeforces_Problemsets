#include <stdio.h>
#include <string.h>
int main()
{
    char str[1005];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    char letters[len];
    if (len <= 2)
    {
        printf("0\n");
        return 0;
    }
    int count = 1, x = 0;
    for (int i = 1; i < len; i += 3)
    {
        letters[x++] = str[i];
    }
    for (int i = 0; i < x; i++)
    {
        int check = 1;
        for (int j = 0; j < x - i - 1; j++)
        {
            if (letters[j] > letters[j + 1])
            {
                char temp = letters[j];
                letters[j] = letters[j + 1];
                letters[j + 1] = temp;
                check = 0;
            }
        }
        if (check)
            break;
    }
    for (int i = 1; i < x; i++)
    {
        if (letters[i] == letters[i - 1])
            continue;
        count++;
    }
    printf("%d\n",count);
}
