#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false), cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define br "\n"

using namespace std;

int main()
{
    op();

    long long n;
    cin >> n;
    if (n <= 4 | n == 9)
    {
        cout << n << br;
        return 0;
    }
    string st = to_string(n);
    if (st[0] != '9')
    {
        int a = st[0] - '0';
        if (a > 4)
            st[0] = ((9 - a) + '0');
    }
    for (int j = 1; j < st.size(); j++)
    {
        int a = (st[j] - '0');
        if (a > 4)
            st[j] = ((9 - a) + '0');
    }
    cout << st << br;

    return 0;
}