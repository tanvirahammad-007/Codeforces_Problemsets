#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> num;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            num.push_back(x);
        }
        sort(num.begin(), num.end());
        int check{1};
        for (int i = 0; i < n - 1; i++)
        {
            if (num[i + 1] - num[i] > 1)
            {
                cout << "NO\n";
                check = 0;
                break;
            }
        }
        if (check)
            cout << "YES" << endl;
    }
    return 0;
}