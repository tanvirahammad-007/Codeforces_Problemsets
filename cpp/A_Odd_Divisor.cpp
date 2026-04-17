#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;

    while (t--)
    {
        long long n{};
        cin >> n;
        bool check = false;

        while (n > 1)
        {
            if (n % 2 != 0)
            {
                check = true;
                break;
            }
            n /= 2;
        }

        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}