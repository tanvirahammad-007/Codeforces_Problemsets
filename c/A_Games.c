#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int a[t], b[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (a[i] == b[j])
                count++;
        }
    }
    printf("%d\n", count);
}