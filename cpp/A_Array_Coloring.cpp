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
        int n{};
        cin >> n;

        vector<int> vec{};
        for (int i = 0; i < n; i++)
        {
            int x{};
            cin >> x;
            vec.push_back(x);
        }

        int sum = accumulate(vec.begin(), vec.end(), 0);

        if (sum % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}