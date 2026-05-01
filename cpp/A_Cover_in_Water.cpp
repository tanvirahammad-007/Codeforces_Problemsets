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
        string v;
        cin >> v;

        int x{}, ans{};
        for (int i = 0; i < n; i++)
        {
            if (v[i] != '.')
            {
                if (x >= 3)
                {
                    ans = 2;
                    break;
                }
                x = 0;
                continue;
            }
            ans++;
            x++;
        }
        if (x >= 3)
            cout << 2 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}