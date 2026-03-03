#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int score[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }
    int high_score = score[0];
    int low_score = score[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (score[i] > high_score)
        {
            count++;
            high_score = score[i];
        }
        else if (score[i] < low_score)
        {
            count++;
            low_score = score[i];
        }
    }
    printf("%d\n", count);
}