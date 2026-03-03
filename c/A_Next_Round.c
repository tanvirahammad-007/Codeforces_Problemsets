#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n + 5];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int w = arr[k], count = 0;
    if (w == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] > w)
                count++;
        }
        printf("%d\n", count);
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= w)
            count++;
    }
    printf("%d\n", count);
}
