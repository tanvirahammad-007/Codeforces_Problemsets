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
        int n{}, k{};
        cin >> n >> k;

        int check = 0;

        for (int i = 0; i < n; i++)
        {
            int x{};
            cin >> x;
            if (x == k)
                check = 1;
        }
        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}