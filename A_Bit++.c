#include <stdio.h>
#include <string.h>
int main()
{
    int n, x = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char str[4];
        scanf("%s", str);
        int len = strlen(str);
        int pos=0;
        for (int j = 0; j < len; j++)
        {
            if (str[j] == 'X')
            {
                pos = j;
                break;
            }
        }
        if(pos == 0 && str[pos+1]=='+') x++;
        else if(pos == 0 && str[pos+1]=='-') x--;
        else if(pos > 0 && str[pos-1]=='-') x--;
        else if(pos > 0 && str[pos-1]=='+') x++;
    }
    printf("%d\n",x);
}
