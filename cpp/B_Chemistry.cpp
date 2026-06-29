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
        int n{}, k{};
        cin >> n >> k;
        string st;
        cin >> st;

        if (n - k <= 1)
        {
            cout << "YES" << endl;
            continue;
        }

        vector<int> v(26, 0);
        for (int i = 0; i < st.size(); i++)
            v[st[i] - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            if (k <= 0)
                break;
            if (v[i] % 2 != 0)
            {
                v[i]--;
                k--;
            }
        }

        int cnt{};
        for (int i = 0; i < 26; i++)
        {
            if (v[i] % 2 != 0)
            {
                cnt++;
            }
        }
        if (cnt <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}