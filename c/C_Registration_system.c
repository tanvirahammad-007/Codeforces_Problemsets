#include <stdio.h>
#include <string.h>

struct freq
{
    char x[35];
    int f;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct freq arr[n];
    int used = 0;

    for (int i = 0; i < n; i++)
    {
        char str[35];
        scanf("%s", str);

        int found = -1;
        for (int j = 0; j < used; j++)
        {
            if (strcmp(arr[j].x, str) == 0)
            {
                found = j;
                break;
            }
        }
        if (found == -1)
        {
            strcpy(arr[used].x, str);
            arr[used].f = 1;
            used++;
            printf("OK\n");
        }
        else
        {
            printf("%s%d\n", str, arr[found].f);
            arr[found].f++;
        }
    }
    return 0;
}
