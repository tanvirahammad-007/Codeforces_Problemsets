#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a % b == 0)
        {
            printf("0\n");
            continue;
        }
        float ab = (float)a / b;
        int abi = (a / b) + 1;
        float ans = (abi - ab) * b;
        printf("%.0f\n", ans);
    }
}