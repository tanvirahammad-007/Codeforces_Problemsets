#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    int maxin = 0, minin = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxin = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            minin = i;
        }
    }
    int check = 0;
    if (maxin > minin)
        check = 1;
    int count = 0;
    while (maxin > 0)
    {
        int temp = arr[maxin];
        arr[maxin] = arr[maxin - 1];
        arr[maxin - 1] = temp;
        maxin--;
        count++;
    }
    while (minin < n - 1)
    {
        int temp = arr[minin];
        arr[minin] = arr[minin + 1];
        arr[minin + 1] = temp;
        minin++;
        count++;
    }

    if (check)
        printf("%d\n", count - 1);
    else
        printf("%d\n", count);
}
