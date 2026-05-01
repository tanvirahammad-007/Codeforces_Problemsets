#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if (p1.first > p2.first)
        return 1;
    else if (p1.first == p2.first)
        return (p1.second < p2.second);
    return 0;
}

int main()
{
    op();

    int s{}, n{};
    cin >> s >> n;
    vector<pair<int, int>> round(n);
    for (int i = 0; i < n; i++)
    {
        cin >> round[i].first >> round[i].second;
    }

    sort(round.rbegin(), round.rend(), cmp);

    for (int i = 0; i < n; i++)
    {
        if (round[i].first >= s)
        {
            cout << "NO\n";
            return 0;
        }
        s += round[i].second;
    }
    cout << "YES" << endl;

    return 0;
}