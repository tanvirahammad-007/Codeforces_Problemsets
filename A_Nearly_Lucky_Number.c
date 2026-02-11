#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    if (n / 10 == 0){
        printf("NO\n");
        return 0;
    }
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
        }
        n = n / 10;
    }
    if (count == 4 || count == 7)
        printf("YES\n");
    else
        printf("NO\n");
}
