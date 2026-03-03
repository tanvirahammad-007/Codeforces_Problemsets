#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int level[n+1];
    for (int i = 1; i <= n; i++)
    {
        level[i] = 0;
    }
    int p;
    scanf("%d", &p);
    int x[p];
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &x[i]);
        level[x[i]] = 1;
    }
    int q;
    scanf("%d", &q);
    int y[q];
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &y[i]);
        level[y[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (level[i] == 0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");
}
