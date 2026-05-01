#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;

    int mx_row_element = -1;
    int mx_row = 0;

    char el;
    int row_element_count = 0;

    vector<int> coll_element(m, 0);
    for (int row = 0; row < n; row++)
    {
        row_element_count = 0;
        for (int coll = 0; coll < m; coll++)
        {
            cin >> el;
            if (el == '#')
            {
                row_element_count++;
                coll_element[coll]++;
            }
        }
        if (row_element_count > mx_row_element)
        {
            mx_row = row;
            mx_row_element = row_element_count;
        }
    }

    int mx_coll_element = -1;
    int mx_coll = 0;
    for (int i = 0; i < m; i++)
    {
        if (coll_element[i] > mx_coll_element)
        {
            mx_coll = i;
            mx_coll_element = coll_element[i];
        }
    }
    cout << mx_row + 1 << ' ' << mx_coll + 1 << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}