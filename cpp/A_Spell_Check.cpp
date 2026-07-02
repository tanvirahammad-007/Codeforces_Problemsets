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
        string st;
        cin >> st;
        if (n < 5 || n > 5)
        {
            no;
            continue;
        }
        string main = "Timru";
        sort(all(st));
        if (st == main)
            yes;
        else
            no;
    }

    return 0;
}