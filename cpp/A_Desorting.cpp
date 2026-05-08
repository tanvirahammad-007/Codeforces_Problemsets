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
        vector<int> v(n);
        int check = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i > 0 && v[i - 1] > v[i])
                check = 1;
        }

        if (check)
        {
            cout << 0 << endl;
        }
        else
        {
            int minD = INT_MAX;
            for (int i = 1; i < n; i++)
            {
                minD = min(minD,v[i] - v[i - 1]);
            }

            if(minD <= 1)
                cout << 1 << endl;
            else if(minD%2 == 0)
                cout << (minD/2) + 1 << endl;
            else
                cout << (minD+1)/2 << endl;
        }
    }
    return 0;
}
