#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        char s[n],q[n];
        scanf("%s %s",s,q);
        for(int j=0; j<n-1; j++)
        {
            for(int k=0; k<n-j-1; k++)
            {
                if(s[k] > s[k+1])
                {
                    char temp = s[k];
                    s[k] = s[k+1];
                    s[k+1] = temp;
                }
                if(q[k] > q[k+1])
                {
                    char temp = q[k];
                    q[k] = q[k+1];
                    q[k+1] = temp;
                }
            }
        }
        if(strcmp(s,q) == 0) printf("YES\n");
        else printf("NO\n");
    }
}
