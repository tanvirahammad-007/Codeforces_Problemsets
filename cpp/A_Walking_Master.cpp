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
        pair<int, int> initial, final;
        cin >> initial.first >> initial.second >> final.first >> final.second;
        if(initial == final)
        {
            cout << 0 << endl;
            continue;
        }
        if(initial.second > final.second)
        {
            cout << -1 << endl;
            continue;
        }
        int count = final.second - initial.second;
        initial.first += count;
        initial.second += count;
        if(initial.first < final.first)
        {
            cout << -1 << endl;
            continue;
        }
        count += initial.first - final.first;

        cout << count << endl;
    }
    return 0;
}