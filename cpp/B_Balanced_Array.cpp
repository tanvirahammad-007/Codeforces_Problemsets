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
        if (n < 4 || n % 4 != 0)
        {
            no;
            continue;
        }
        yes;
        vector<int> v(n, 0);
        int even = 2, odd = 1;
        int totalEven{}, totalOdd{};
        for (int i = 0; i < n / 2; i++)
        {
            totalEven += even;
            v[i] = even;
            even += 2;
        }
        for (int i = n / 2; i < n - 1; i++)
        {
            totalOdd += odd;
            v[i] = odd;
            odd += 2;
        }
        while (totalOdd + odd <= totalEven)
        {
            if (totalOdd + odd == totalEven)
            {
                v[n - 1] = odd;
                break;
            }
            else
                odd += 2;
        }
        for (auto &x : v)
            cout << x << " ";
        cout << br;
    }

    return 0;
}