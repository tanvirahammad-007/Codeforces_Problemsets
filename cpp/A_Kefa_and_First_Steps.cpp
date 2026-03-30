#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> money;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        money.push_back(x);
    }
    int max{1};
    int count{1};
    for (int i = 1; i < n; i++)
    {
        if (money.at(i - 1) > money.at(i))
        {
            count = 1;
            continue;
        }
        count++;
        if (max < count)
            max = count;
    }

    cout << max << endl;
    return 0;
}