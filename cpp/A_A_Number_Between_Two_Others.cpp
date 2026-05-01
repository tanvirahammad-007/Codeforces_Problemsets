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
        long long int n{}, m{};
        cin >> n >> m;

        if (m - n == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        int x = 2;
        long long y = n;
        int check{};
        while (y < m)
        {
            y = n * x;
            x ++;
            if (m % y != 0 && m > y)
            {
                check = 1;
                break;
            }
        }
        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}