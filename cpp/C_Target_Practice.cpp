#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int t{};
    cin >> t;

    while (t--)
    {
        int target[10][10] = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                              {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                              {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                              {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                              {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                              {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                              {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                              {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                              {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                              {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
        int total{};
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                char x;
                cin >> x;
                if (x == 'X')
                    total += target[i][j];
            }
        }
        cout << total << endl;
    }
}