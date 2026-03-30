#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> soldiers;
    for (int i = 0; i < n; i++)
    {
        int x{};
        cin >> x;
        soldiers.push_back(x);
    }
    int max = soldiers.at(0);
    int min = soldiers.at(0);
    int maxin{}, minin{};

    for (int i = 1; i < n; i++)
    {
        if (max < soldiers.at(i))
        {
            max = soldiers.at(i);
            maxin = i;
        }
        if (min >= soldiers.at(i))
        {
            min = soldiers.at(i);
            minin = i;
        }
    }

    int ans = maxin + (n - 1 - minin);
    if (maxin > minin)
        ans--;

    cout << ans << endl;

    return 0;
}