#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;
    if (n % 2 != 0)
        cout << -1 << "\n";
    else if (n % 2 == 0)
    {
        int x = 1;
        while (x <= n)
        {
            cout << x + 1 << " " << x << " ";
            x += 2;
        }
        cout << "\n";
    }
    return 0;
}