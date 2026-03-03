#include <stdio.h>
#include <string.h>
int main()
{
    char str[105];
    scanf("%s", str);
    int len = strlen(str);
    if(len<=1) printf("%s\n",str);
    else{
        for(int i=0; i<len-2; i += 2)
        {
            for(int j=0; j<len-i-2; j += 2)
            {
                if(str[j]>str[j+2]){
                    char temp = str[j];
                    str[j] = str[j+2];
                    str[j+2] = temp;
                }
            }
        }
        printf("%s\n",str);
    }
}
