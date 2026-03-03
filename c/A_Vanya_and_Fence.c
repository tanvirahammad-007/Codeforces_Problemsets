#include <stdio.h>
int main()
{
    int n,h;
    scanf("%d %d",&n,&h);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int width = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=h) width++;
        else width += 2;
    }
    printf("%d\n",width);
}
