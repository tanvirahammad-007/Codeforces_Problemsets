#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n{};
    cin >> n;

    for (int i = 0; i <= (2 * n); i++)
    {
        if (i <= n)
        {
            for (int j = 2 * i; j < 2 * n; j++)
            {
                cout << " ";
            }
            for (int k = 0; k <= i; k++)
            {
                if (k > 0)
                    cout << " ";
                cout << k;
            }

            for (int l = i - 1; l >= 0; l--)
            {
                cout << " " << l;
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < 2 * (i - n); j++)
            {
                cout << " ";
            }
            for (int k = 0; k <= (2 * n - i); k++)
            {
                if (k > 0)
                    cout << " ";
                cout << k;
            }
            for (int l = (2 * n - i - 1); l >= 0; l--)
            {
                cout << " " << l;
            }
            cout << endl;
        }
    }
    return 0;
}