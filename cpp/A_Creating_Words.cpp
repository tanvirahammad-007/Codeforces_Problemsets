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
        string a,b;
        cin >> a >> b;
        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        cout << a << " " << b << endl;
    }
    return 0;
}