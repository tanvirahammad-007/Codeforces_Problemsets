#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (str[i - 1] == str[i])
            count++;
    }
    printf("%d\n", count);
}
