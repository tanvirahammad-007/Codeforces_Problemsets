#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a == b && b == c)
        {
            printf("NO\n");
            continue;
        }
        int ab = ((a + b) + abs(a - b)) / 2;
        int max = ((ab + c) + abs(ab - c)) / 2;
        int sum = a + b + c;
        if(sum == max)
        {
            printf("NO\n");
            continue;
        }
        if (sum % max == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}


// Easy

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a == b + c || b == a + c || c == a + b) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}