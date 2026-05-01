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
        int n{}, m{};
        cin >> n >> m;

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int x{};
            cin >> x;
            v.push_back(x);
        }

        int max_diff = v[0];

        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] > max_diff)
                max_diff = v[i] - v[i - 1];
        }

        if (2 * (m - v[n - 1]) > max_diff)
            max_diff = 2 * (m - v[n - 1]);

        cout << max_diff << endl;
    }

    return 0;
}