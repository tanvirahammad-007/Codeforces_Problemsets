#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("I hate it\n");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && i < n)
            printf("I hate that ");
        else if (i % 2 == 0 && i < n)
            printf("I love that ");
        else if (i % 2 == 0)
            printf("I love it");
        else
            printf("I hate it");
    }
    printf("\n");
}
