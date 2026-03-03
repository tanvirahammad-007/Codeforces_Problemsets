#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int count = 0;
        int arr[10] = {0};
        int i = 0;
        while (n)
        {
            int x = pow(10, i);
            i++;
            if (n % 10 != 0)
            {
                if (x == 0)
                {
                    arr[count++] = (n % 10);
                }
                arr[count++] = (n % 10) * x;
            }
            n = n / 10;
        }
        printf("%d\n", count);
        for (int i = 0; i < count; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}