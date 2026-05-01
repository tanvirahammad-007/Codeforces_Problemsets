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
        {
            cin >> v[i];
        }

        if (v[0] == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

