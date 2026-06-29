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
        string st;
        cin >> st;
        int cnt{};
        string real = "codeforces";
        for(int i=0; i<10; i++)
        {
            if(st[i] != real[i])
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}