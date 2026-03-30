#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mid{};
        if ((a > b && a < c) || (a > c && a < b))
        {
            mid = a;
        }
        else if ((b > a && b < c) || (b > c && b < a))
        {
            mid = b;
        }
        else
        {
            mid = c;
        }
        cout << mid << endl;
    }
}