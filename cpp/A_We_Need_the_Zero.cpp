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
        int n{};
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ans{};
        for (int i = 0; i < n; i++)
            ans = (ans ^ v[i]);

        for (int i = 0; i < n; i++)
            v[i] = (v[i] ^ ans);

        int x{};
        for (int i = 0; i < n; i++)
            x = (x ^ v[i]);

        if (x == 0)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}