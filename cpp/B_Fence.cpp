#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{}, k{};
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int prev{};
    for (int i = 0; i < k; i++)
    {
        prev += v[i];
    }
    int minHeight = prev;
    int minIndex = 1;
    for (int i = k; i < n; i++)
    {
        int sum = prev + v[i] - v[i-k];
        if (sum < minHeight)
        {
            minHeight = sum;
            minIndex = i - k + 2;
        }
        prev = sum;
        if (sum <= k)
            break;
    }
    cout << minIndex << "\n";
    return 0;
}