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

        vector<int> a2, a3, a6, ex;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 6 == 0)
                a6.push_back(x);
            else if (x % 2 == 0)
                a2.push_back(x);
            else if (x % 3 == 0)
                a3.push_back(x);
            else
                ex.push_back(x);
        }

        for (auto x : a2)
            cout << x << " ";
        for (auto x : ex)
            cout << x << " ";
        for (auto x : a3)
            cout << x << " ";
        for (auto x : a6)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}