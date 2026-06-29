#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{}, m{}, a{}, b{};
    cin >> n >> m >> a >> b;
    int total{}, cnt{};
    if (m * a <= b)
    {
        while (cnt < n)
        {
            cnt++;
            total += a;
        }
    }
    else
    {
        while (cnt < n)
        {
            if (cnt + m > n && (n-cnt)*a < b)
            {
                while (cnt < n)
                {
                    cnt++;
                    total += a;
                }
                break;
            }
            cnt += m;
            total += b;
        }
    }
    cout << total << "\n";
    return 0;
}