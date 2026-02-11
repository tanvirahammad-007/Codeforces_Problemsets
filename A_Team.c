#include <stdio.h>
int main()
{
    int n,count =0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        scanf("%d %d %d",&x,&y,&z);
        if(x==1 && y==1 || x==1 && z==1 || y==1 && z==1){
            count++;
        }
    }
    printf("%d\n",count);
}
