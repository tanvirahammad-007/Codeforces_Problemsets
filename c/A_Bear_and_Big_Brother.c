#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 1;
    while (1)
    {
        a *= 3;
        b *= 2;
        if (a > b)
            break;
        else
            count++;
    }
    printf("%d\n", count);
}
