#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{}, k{};
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    double ans = v[0] - 0.0;
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, (v[i + 1] * 1.0 - v[i]) / 2.0);
    }
    ans = max(ans, (k - v[n - 1] * 1.0));

    // cout << ans << "\n";
    printf("%.9f\n",ans);
    return 0;
}