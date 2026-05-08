#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == -1)
                neg++;
            else
                pos++;
        }

        int ans = 0;
        while (neg > pos)
        {
            neg--;
            pos++;
            ans++;
        }
        if (neg % 2 != 0)
        {
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}