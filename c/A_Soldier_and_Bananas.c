#include <stdio.h>
int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    long long totalCost = k * (w*(w+1))/2;
    if(totalCost <= n)
    {
        printf("0\n");
        return 0;
    }
    printf("%lld\n",totalCost-n);
    return 0;
}
