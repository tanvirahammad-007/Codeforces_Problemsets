#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 1;
    char meg1[3];
    scanf("%s", meg1);
    char prev = meg1[0];
    for (int i = 1; i < n; i++)
    {
        char meg[3];
        scanf("%s", meg);
        if(meg[0] == prev) continue;
        else count++;
        prev = meg[0];
    }
    printf("%d\n",count);
}
