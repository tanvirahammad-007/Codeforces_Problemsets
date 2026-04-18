#include <bits/stdc++.h>

using namespace std;

// learned about bitmasks and apply
int main()
{
    int n{};
    cin >> n;

    while (n--)
    {
        int a{}, b{}, c{};
        cin >> a >> b >> c;

        cout << (a ^ b ^ c) << endl;
    }
    return 0;
}

// Normal version
/*
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

        if (a == b)
            cout << c << endl;
        else if (a == c)
            cout << b << endl;
        else
            cout << a << endl;
    }
    return 0;
}
*/