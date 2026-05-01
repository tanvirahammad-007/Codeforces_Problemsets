#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;

    vector<pair<string, string>> leaves(n);

    for (int i = 0; i < n; i++)
    {
        cin >> leaves[i].first >> leaves[i].second;
    }

    sort(leaves.begin(), leaves.end());
    int ans = unique(leaves.begin(), leaves.end()) - leaves.begin();
    cout << ans << endl;
    return 0;
}