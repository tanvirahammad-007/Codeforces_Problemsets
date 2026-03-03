#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0;
    int count2 = 0;
    while (a > 0 && b > 0)
    {
        count++;
        a--;
        b--;
    }
    if (a > 0 && b == 0)
        count2 = a / 2;
    else
        count2 = b / 2;
    printf("%d %d\n", count, count2);
}