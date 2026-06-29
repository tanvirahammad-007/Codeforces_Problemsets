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
        string st{};
        cin >> st;
        int ans = (st.size() - 1)*9;
        ans += st[0] - '0';
        cout << ans << endl;
    }
    return 0;
}