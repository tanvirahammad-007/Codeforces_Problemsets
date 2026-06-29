#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;
    vector<int> v(n);
    int one{}, two{}, three{};
    for (auto &x : v)
    {
        cin >> x;
        if (x == 1)
            one++;
        if (x == 2)
            two++;
        if (x == 3)
            three++;
    }
    int team = min({one, two, three});

    cout << team << "\n";
    for (int i = 0; i < team; i++)
    {
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 1)
                {
                    cout << i + 1 << " ";
                    v[i] = 0;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 2)
                {
                    cout << i + 1 << " ";
                    v[i] = 0;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 3)
                {
                    cout << i + 1 << " ";
                    v[i] = 0;
                    break;
                }
            }
        cout << "\n";
    }
    return 0;
}