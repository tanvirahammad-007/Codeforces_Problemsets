#include <stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int total_drink = k * l;
    int total_slice = c * d;
    int count = 0;
    while ((total_drink >= n * nl) && (p >= n * np) && (total_slice >= n))
    {
        total_drink -= (n * nl);
        total_slice -= n;
        p -= (n * np);
        count++;
    }
    printf("%d\n", count);
}