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
        vector<int> v(n);
        int count2{};
        for (auto &x : v)
        {
            cin >> x;
            if (x == 2)
                count2++;
        }

        if (count2 % 2 == 1)
            cout << -1 << endl;
        else
        {
            count2 /= 2;
            int i;
            for (i = 0; i < n; i++)
            {
                if (v[i] == 2)
                    count2--;
                if (count2 == 0)
                    break;
            }
            cout << i + 1 << endl;
        }
    }
    return 0;
}