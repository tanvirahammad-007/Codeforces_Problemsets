#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char yes[5];
        scanf("%s", yes);
        if (yes[0] != 'y' && yes[0] != 'Y')
        {
            printf("NO\n");
            continue;
        }
        if (yes[1] != 'e' && yes[1] != 'E')
        {
            printf("NO\n");
            continue;
        }
        if (yes[2] != 's' && yes[2] != 'S')
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }
}
