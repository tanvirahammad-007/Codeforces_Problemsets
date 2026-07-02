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

    vector<int> v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    string st;
    cin >> st;
    long long total{};
    for (auto &x : st)
    {
        int y = (x - '0') - 1;
        total += v[y];
    }
    cout << total << "\n";
    return 0;
}