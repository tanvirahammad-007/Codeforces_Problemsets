#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{}, m{};
    cin >> n >> m;
    vector<int> v(m);
    for (auto &x : v)
        cin >> x;

    long long ans = abs(1 - v[0]);
    int prev = v[0];
    for (int i = 1; i < m; i++)
    {
        if (prev == 0)
        {
            ans += v[i];
            prev = v[i];
        }
        if (v[i] < prev)
        {
            ans += abs(v[i] + (n - v[i - 1]));
            prev = v[i];
        }
        else
        {
            ans += abs(v[i] - v[i - 1]);
            prev = v[i];
        }
    }
    cout << ans << "\n";
    return 0;
}