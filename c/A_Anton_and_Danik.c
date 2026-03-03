#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int countA = 0;
    int countD = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            countA++;
        else
            countD++;
    }
    if (countA > countD)
        printf("Anton\n");
    else if (countA < countD)
        printf("Danik\n");
    else
        printf("Friendship\n");
}
