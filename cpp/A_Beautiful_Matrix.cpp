#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> arr(5, vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> arr[i][j];
    }
    int x{}, y{};

    for (int i = 0; i < 5; i++)
    {
        int check{};
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
                check = 1;
                break;
            }
        }
        if (check)
            break;
    }
    int count{};
    if (x == 2 && y == 2)
    {
        cout << count << endl;
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
    cout << count << endl;

    return 0;
}