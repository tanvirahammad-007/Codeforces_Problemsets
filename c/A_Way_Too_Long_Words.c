#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        char str[105];
        scanf("%s",str);
        int len = strlen(str);
        if(len <= 10) {
            printf("%s\n",str);
            continue;
        }
        printf("%c%d%c\n",str[0],len-2,str[len-1]);
    }
}
