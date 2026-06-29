#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define br "\n"

using namespace std;

int main()
{
    op();

    int t{};
    cin >> t;

    while (t--)
    {
        long long n{};
        cin >> n;
        if (n == 1)
        {
            cout << 0 << br;
            continue;
        }
        if (n % 3 != 0)
        {
            cout << -1 << br;
            continue;
        }
        long long cpy = n;
        int cnt{};
        while (cpy > 1)
        {
            if (cnt > n/2)
                break;
            if (cpy % 6 == 0)
            {
                cpy /= 6;
                cnt++;
            }
            else
            {
                cpy *= 2;
                cnt++;
            }
        }
        if (cpy == 1)
            cout << cnt << br;
        else
            cout << -1 << br;
    }

    return 0;
}