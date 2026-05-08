#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(NULL);

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
        vector<int> v(n - 1);
        int plus{}, minus{};
        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
            if (v[i] > 0)
                plus += v[i];
            else
                minus -= v[i];
        }
        cout << minus - plus << endl;
    }
}