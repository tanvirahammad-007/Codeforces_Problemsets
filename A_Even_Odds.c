#include <stdio.h>
int main()
{
    long long int x, y;
    scanf("%lld %lld", &x, &y);
    if (y == 1)
    {
        printf("1\n");
        return 0;
    }
    long long int num = (2 * y) - 1;
    if (num <= x)
    {
        printf("%lld\n", num);
        return 0;
    }
    if (x % 2 == 0)
    {
        num = num - x + 1;
    }
    else
    {
        num = num - x;
    }

    printf("%lld\n", num);
}
