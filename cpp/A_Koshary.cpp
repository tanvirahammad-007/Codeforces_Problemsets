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
        int a{}, b{};
        cin >> a >> b;
        if (a % 2 == 1 && b % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}