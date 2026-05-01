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
        int n{};
        cin >> n;
        string str;
        cin >> str;
        int a1{}, a2{};
        for (int i = 0; i < n; i++)
        {
            if (str[i] == ')')
                a2++;
            else
                a1++;
        }
        if (a1 == a2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}