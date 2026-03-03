#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = n / 100;
    int x[5] = {20, 10, 5, 1};
    n = n % 100;
    for (int i = 0; i < 5; i++)
    {
        count = count + n / x[i];
        n = n % x[i];
        if (n == 0)
        {
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}
