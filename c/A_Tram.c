#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 0 , max = count;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        count = count + b - a;
        if(count > max) max = count;
    }
    printf("%d\n", max);
}
