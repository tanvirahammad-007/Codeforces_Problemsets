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
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                swap(a[i], a[i+1]);
                a[i+1] += a[i];
            }
        }
        cout << a[n-1] << endl;
    }
    return 0;
}