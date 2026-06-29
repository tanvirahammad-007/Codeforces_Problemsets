#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;
    vector<int> v(n);
    int max{}, total{};
    for (auto &x : v)
    {
        cin >> x;
        if (x > max)
            max = x;
        total += x;
    }
    cout << (long long)(n * max) - total << "\n";
    return 0;
}