#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x, y, count = 0;
    for (int i = 0; i < 5; i++)
    {
        int check = 0;
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
                check = 1;
                break;
            }
            if (check)
                break;
        }
    }
    if (x == 2 && y == 2)
    {
        printf("0\n");
        return 0;
    }
    if (x == 2 && (y > 2 || y < 2))
    {
        count = abs(y - 2);
    }
    else if (y == 2 && (x > 2 || x < 2))
    {
        count = abs(x - 2);
    }
    else if ((x > 2 || x < 2) && (y > 2 || y < 2))
    {
        count = abs(y - 2) + abs(x - 2);
    }
    printf("%d\n", count);
}
