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

    int n;
    cin >> n;

    vector<int> ans(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        int p;
        cin >> p;
        ans[p] = i;
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}