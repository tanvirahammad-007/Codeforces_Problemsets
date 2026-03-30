#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    char code[27]{};
    for (auto m : "codeforces")
    {
        code[m] = 1;
    }
    while (t--)
    {
        char x;
        cin >> x;
        if (code[x] == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}