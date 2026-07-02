#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false), cin.tie(nullptr)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * (b)) / gcd(a, b)
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
        int n{};
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;

        int x = -1, check = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                x = -1;
                continue;
            }
            else if (x == -1)
            {
                x = i;
            }
            if (x != -1 && (((i - x) % 2 == 0 && a[i] > b[i]) || ((i - x) % 2 != 0 && a[i] < b[i])))
            {
                check = 0;
            }
            else
                check = 1;
        }
        if (check)
            yes;
        else
            no;
    }

    return 0;
}