#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> shape(n, vector<char>(m));
        int a{}, b{};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> shape[i][j];
            }
        }

        vector<pair<int, int>> c;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (shape[i][j] == '#')
                    c.push_back({i, j});
            }
        }

        cout << c[c.size() / 2].first + 1 << " " << c[c.size() / 2].second + 1 << endl;
    }
}