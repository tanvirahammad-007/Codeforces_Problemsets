#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[105];
    scanf("%s",s);
    int len = strlen(s);
    int c1=0,c2=0;
    for(int i=0; i<len; i++)
    {
        if(s[i]>='A' && s[i]<='Z') c1++;
        else if(s[i]>='a' && s[i]<='z') c2++;
    }
    if(c1>c2){
        for(int i=0; i<len; i++)
        {
            printf("%c",toupper(s[i]));
        }
        printf("\n");
    }
    else
    {
        for(int i=0; i<len; i++)
        {
            printf("%c",tolower(s[i]));
        }
        printf("\n");
    }
}
