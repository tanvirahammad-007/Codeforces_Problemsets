#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    op();

    int t{};
    cin >> t;
    while (t--)
    {
        long long int a{}, b{};
        cin >> a >> b;

        if (a % 2 == 1 && b % 2 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}