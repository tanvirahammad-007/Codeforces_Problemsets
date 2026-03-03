#include <stdio.h>
int main()
{
    int s1, s2, s3, s4;
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
    int arr[5] = {s1, s2, s3, s4};
    for (int i = 0; i < 3; i++)
    {
        int check = 1;
        for (int j = 0; j < 4 - i - 1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                check = 0;
            }
        }
        if(check) break;
    }
    int count = 0;
    for (int i = 1; i < 4; i++)
    {
        if(arr[i-1] == arr[i]) count++;
    }
    printf("%d\n",count);
}
