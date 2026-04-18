#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n{};
    cin >> n;
    vector<int> shop{};
    for (int i = 0; i < n; i++)
    {
        int x{};
        cin >> x;
        shop.push_back(x);
    }

    sort(shop.begin(), shop.end());
    int days{};
    cin >> days;

    while (days--)
    {
        int coin{};
        cin >> coin;
        int count{};
        count = upper_bound(shop.begin(), shop.end(), coin) - shop.begin();  // upper_bound(begin, end, value) performs a binary search on a sorted range.
        cout << count << endl;
    }
    return 0;
}