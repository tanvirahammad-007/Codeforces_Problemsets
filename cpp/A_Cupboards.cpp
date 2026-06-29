#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;

    int cpy = n;
    int a{}, b{}, c{}, d{};
    while (n--)
    {
        int x{}, y{};
        cin >> x >> y;
        if (x == 0)
            a++;
        if (y == 0)
            b++;
        if (x == 1)
            c++;
        if (y == 1)
            d++;
    }
    cout << min(a, c) + min(b, d) << "\n";
    return 0;
}