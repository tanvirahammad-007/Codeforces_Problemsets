#include <stdio.h>
#include <string.h>
int main()
{
    char str[105];
    scanf("%s",str);
    int len = strlen(str);
    char find[7] = "hello";
    int x = 0;
    for(int i=0; i<len; i++)
    {
        if(str[i] == find[x])
        {
            x++;
        }
        if(x==5){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}
