#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int t{};
    cin >> t;

    while(t--)
    {
        int n{};
        cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];

        int sum = v[0];
        for(int i=1; i<n; i++)
        {
            if(v[i-1] < v[i])
            {
                v[i] = v[i-1];
            }
            sum += v[i];
        }

        cout << sum << endl;
    }
    return 0;
}