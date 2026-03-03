#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a <= 5)
    {
        printf("1\n");
        return 0;
    }
    int count = (a / 5);
    if (a%5 == 0)
        printf("%d\n", count);
    else
        printf("%d\n", count + 1);
}
