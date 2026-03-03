#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char tic[6];
        scanf("%s", tic);
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
            {
                sum1 += tic[i] - '0';
            }
            else
                sum2 += tic[i] - '0';
        }
        if (sum1 == sum2)
            printf("YES\n");
        else
            printf("NO\n");
    }
}