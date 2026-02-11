#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[105],b[105];
    scanf("%s %s",a,b);
    int alen = strlen(a);
    int blen = strlen(b);
    for(int i=0; i<alen; i++){
        a[i] = tolower(a[i]);
    }
    for(int i=0; i<blen; i++){
        b[i] = tolower(b[i]);
    }
    printf("%d\n",strcmp(a,b));
}
