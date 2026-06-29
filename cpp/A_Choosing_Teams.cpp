#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{}, k{};
    cin >> n >> k;
    int cnt{};
    while (n--)
    {
        int x{};
        cin >> x;
        if (x + k <= 5)
            cnt++;
    }
    cout << cnt / 3 << "\n";

    return 0;
}