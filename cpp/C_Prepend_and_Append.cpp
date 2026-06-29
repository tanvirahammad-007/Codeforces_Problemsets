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
        string st;
        cin >> st;
        int count = n;
        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            if (st[i] == st[j])
            {
                break;
            }
            count -= 2;
        }
        cout << count << endl;
    }
    return 0;
}