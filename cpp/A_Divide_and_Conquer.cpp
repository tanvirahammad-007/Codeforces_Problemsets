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
        int x{}, y{};
        cin >> x >> y;
        if (x % y == 0)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}