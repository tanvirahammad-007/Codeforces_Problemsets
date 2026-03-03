#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        long long int m;
        scanf("%lld", &m);

        long long int x = sqrt(m);
        int check = 0;
        if (x * x == m) {
            int prime = 1;
            if (x < 2) prime = 0;
            else {
                for (long long int i = 2; i * i <= x; i++) {
                    if (x % i == 0) {
                        prime = 0;
                        break;
                    }
                }
            }
            if (prime) check = 1;
        }

        if (check)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}