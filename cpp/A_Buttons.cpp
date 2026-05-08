#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    op();

    int t{};
    cin >> t;
    while (t--)
    {
        int x{}, y{}, z{};
        cin >> x >> y >> z;

        if (x > y)
            cout << "First" << endl;
        else if (x < y)
            cout << "Second" << endl;
        else
        {
            if (z % 2 == 1)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
    }
}