#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;
    int ans{};
    while (n)
    {
        if (n & 1)
            ans++;
        n >>= 1;
    }

    cout << ans << endl;
    return 0;
}