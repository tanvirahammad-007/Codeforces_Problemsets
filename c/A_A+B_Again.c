#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int num;
        scanf("%d", &num);
        int sum = num % 10;
        sum += num / 10;
        printf("%d\n", sum);
    }
}