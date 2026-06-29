#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int grid[3][3] = {{1, 1, 1},
                  {1, 1, 1},
                  {1, 1, 1}};

int main()
{
    op();

    for (int i = 0; i < 3; i++)
    {
        int x{};
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            if (x % 2 != 0)
            {
                if (j == 0)
                {
                    grid[i][j] = !grid[i][j];
                    grid[i][j + 1] = !grid[i][j + 1];
                    if (i == 0 || i == 1)
                        grid[i + 1][j] = !grid[i + 1][j];
                    if (i == 1 || i == 2)
                        grid[i - 1][j] = !grid[i - 1][j];
                }
                else if (j == 1)
                {
                    grid[i][j] = !grid[i][j];
                    grid[i][j + 1] = !grid[i][j + 1];
                    grid[i][j - 1] = !grid[i][j - 1];
                    if (i == 0 || i == 1)
                        grid[i + 1][j] = !grid[i + 1][j];
                    if (i == 1 || i == 2)
                        grid[i - 1][j] = !grid[i - 1][j];
                }
                else if (j == 2)
                {
                    grid[i][j] = !grid[i][j];
                    grid[i][j - 1] = !grid[i][j - 1];
                    if (i == 0 || i == 1)
                        grid[i + 1][j] = !grid[i + 1][j];
                    if (i == 1 || i == 2)
                        grid[i - 1][j] = !grid[i - 1][j];
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << grid[i][j];
        }
        cout << "\n";
    }

    return 0;
}