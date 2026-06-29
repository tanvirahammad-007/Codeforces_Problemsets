#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int ans{};
    sort(v.begin(), v.end());
    int i = 0, j = n-1, x = 0;
    while(i < j)
    {
        if (v[j] == 4)
        {
            j--;
            ans++;
        }
        else if (v[i] + v[j] < 4)
        {
            v[j] += v[i];
            i++; 
        }
        else if (v[i] + v[j] == 4)
        {
            i++;
            j--;
            ans++;
            x++;
        }
        else
        {
            ans++;
            j--;
        }
        x++;
    }
    if(x != n) ans++;
    cout << ans << "\n";
    return 0;
}