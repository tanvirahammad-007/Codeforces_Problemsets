#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        if (x <= 1399)
            printf("Division 4\n");
        else if (x > 1399 && x <= 1599)
            printf("Division 3\n");
        else if (x > 1599 && x <= 1899)
            printf("Division 2\n");
        else
            printf("Division 1\n");
    }
}