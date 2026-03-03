#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    int x = 0;
    while (l <= r) {
        int curr;
        if (arr[l] > arr[r]) {
            curr = arr[l];
            l++;
        } else {
            curr = arr[r];
            r--;
        }
        if (x == 0)
            sereja += curr;
        else
            dima += curr;

        x = 1 - x;
    }

    printf("%d %d\n", sereja, dima);
    return 0;
}