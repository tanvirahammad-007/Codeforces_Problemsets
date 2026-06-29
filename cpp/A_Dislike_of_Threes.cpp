#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;

    while (n--)
    {
        int x{};
        cin >> x;

        for (int i = 1;; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
                continue;
            if (--x == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}