#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0)
    {
        printf("YES\n");
        return 0;
    }
    while (n)
    {
        if (n % 10 != 4 && n % 10 != 7)
        {
            printf("NO\n");
            return 0;
        }
        n = n / 10;
    }
    printf("YES\n");
}
