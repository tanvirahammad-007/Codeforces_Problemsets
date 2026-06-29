#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;
    vector<int> v(n);
    map<int, int> track;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        track[v[i]] = i + 1;
    }
    int m{};
    cin >> m;
    vector<int> q(m);
    for (auto &x : q)
        cin >> x;

    long long cnt1{}, cnt2{};
    for (auto y : q)
    {
        cnt1 += track[y];
        cnt2 += (n - track[y] + 1);
    }

    cout << cnt1 << " " << cnt2 << "\n";

    return 0;
}