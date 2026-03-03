#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int coin[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &coin[i]);
    for (int i = 0; i < n - 1; i++)
    {
        int check = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (coin[j] < coin[j + 1])
            {
                int temp = coin[j];
                coin[j] = coin[j + 1];
                coin[j + 1] = temp;
                check = 0;
            }
        }
        if (check)
            break;
    }
    int total = 0;
    for (int i = 0; i < n; i++)
        total += coin[i];

    int take = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        take += coin[i];
        count++;
        if (take > total - take)
        {
            printf("%d\n", count);
            return 0;
        }
    }
}
