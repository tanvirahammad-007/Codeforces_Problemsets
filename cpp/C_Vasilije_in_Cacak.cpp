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
        long long int n{}, k{}, x{}, a, b, c, d;
        cin >> n >> k >> x;
        a = (n * (n + 1)) / 2;
        b = n - k;
        c = a - (b * (b + 1)) / 2;
        d = (k * (k + 1)) / 2;

        if (x >= d && x <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}