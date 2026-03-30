#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n{}, m{};
    cin >> n >> m;
    vector<int> puzzles;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        puzzles.push_back(x);
    }
    sort(puzzles.begin(), puzzles.end());

    int ans{1000};
    for (int i = 0; i <= m - n; i++)
    {
        int x = puzzles.at(i + n - 1) - puzzles.at(i);
        if (ans > x)
            ans = x;
    }
    cout << ans << endl;
    return 0;
}