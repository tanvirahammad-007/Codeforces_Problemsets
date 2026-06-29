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
        if(st == "abc")
        {
            cout << "YES\n";
            continue;
        }
        if(st[0] == 'a' || st[1] == 'b' || st[2] == 'c')
        {
            cout << "YES\n";
            continue;
        } 
        cout << "NO\n";
    }
    return 0;
}