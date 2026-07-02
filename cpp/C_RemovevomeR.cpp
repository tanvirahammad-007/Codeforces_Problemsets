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
        int n;
        cin >> n;
        string st;
        cin >> st;
        int cnt0{}, cnt1{};
        for (auto &x : st)
        {
            if (x == '0')
                cnt0++;
            else
                cnt1++;
        }
        if(st.size() <= 1)
            cout << 1 << br;
        else if(cnt1 == n || cnt0 == n)
            cout << 1 << br;
        else if (is_sorted(all(st)) || is_sorted(rall(st)))
            cout << 2 << br;
        else
            cout << 1 << br;
    }

    return 0;
}