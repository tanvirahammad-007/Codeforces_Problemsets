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
        int a{}, b{};
        cin >> a >> b;

        vector<int> v;
        while (1)
        {
            if (a % b != 0)
            {
                v.push_back(a);
                break;
            }
            a--;
            v.push_back(1);
        }
        cout << v.size() << endl;
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}