#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        int n{}, k{};
        cin >> n >> k;
        vector<int> num;
        int check{1};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            num.push_back(x);
            if (x == 0)
                check = 0;
        }
        int special{};
        cin >> special;
        int count{};
        if (check)
        {
            cout << count << endl;
            continue;
        }
    }
    return 0;
}