#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int check = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 1)
                printf("#");
            else if (j == m && check % 2 == 1)
            {
                printf("#");
            }
            else if (j == 1 && check % 2 == 0)
            {
                printf("#");
            }
            else
                printf(".");
        }
        if (i % 2 == 0)
            check++;
        printf("\n");
    }
}
