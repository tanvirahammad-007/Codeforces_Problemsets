#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int evenCount = 0, oddCount = 0;
    int evenIndex = -1, oddIndex = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
            evenIndex = i + 1;
        } else {
            oddCount++;
            oddIndex = i + 1;
        }
    }

    if (evenCount == 1) {
        printf("%d\n", evenIndex);
    } else {
        printf("%d\n", oddIndex);
    }

    return 0;
}