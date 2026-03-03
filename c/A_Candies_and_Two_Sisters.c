#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n < 3)
        {
            printf("0\n");
            continue;
        }
        n = (n - 1) / 2;
        printf("%d\n", n);
    }
}