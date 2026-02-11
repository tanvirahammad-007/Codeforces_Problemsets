#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    char str[n];
    scanf("%s", str);
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(str[j] == 'G' && str[j-1] == 'B')
            {
                char temp = str[j];
                str[j] = str[j-1];
                str[j-1] = temp;
                j++;
            }
        }
    }
    printf("%s\n",str);
}
