#include <stdio.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long tiles_n = (n + a - 1) / a;
    long long tiles_m = (m + a - 1) / a;

    long long result = tiles_n * tiles_m;
    printf("%lld\n", result);

    return 0;
}