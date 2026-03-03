#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < m; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    int min = 1000;
    for (int i = 0; i <= m - n; i++)
    {
        if ((a[i + n - 1] - a[i]) < min)
            min = a[i + n - 1] - a[i];
    }
    printf("%d\n", min);
}