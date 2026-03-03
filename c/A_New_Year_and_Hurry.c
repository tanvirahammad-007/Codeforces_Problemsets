#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    const int total_time = 240;
    int time_left = total_time - k;
    int count = 0;
    if (time_left < 5)
    {
        printf("0\n");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (time_left < 5 * i)
        {
            break;
        }
        count++;
        time_left -= 5 * i;
    }
    printf("%d\n", count);
}