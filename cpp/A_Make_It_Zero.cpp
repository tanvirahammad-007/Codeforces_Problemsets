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
        vector<int> v(n, 0);
        for (auto &x : v)
            cin >> x;
        if(n%2 == 0)
        {
            cout << 2 << endl;
            cout << 1 << ' ' << n << endl;
            cout << 1 << ' ' << n << endl;
        }
        else
        {
            cout << 4 << endl;
            cout << 1 << ' ' << n-1 << endl;
            cout << 1 << ' ' << n-1 << endl;
            cout << n-1 << ' ' << n << endl;
            cout << n-1 << ' ' << n << endl;
        }
        
    }
    return 0;
}