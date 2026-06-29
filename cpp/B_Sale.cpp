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

    int n{}, k{};
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(all(v));
    int ans{};
    for (int i = 0; i < k; i++)
    {
        if (v[i] >= 0)
            break;
        ans += v[i];
    }

    cout << abs(ans) << endl;
    return 0;
}