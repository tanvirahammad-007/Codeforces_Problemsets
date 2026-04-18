#include <bits/stdc++.h>
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    optimize();

    int t{};
    cin >> t;

    while(t--)
    {
        long long int n{};
        cin >> n;
        cout << -n+1 << " " << n << endl;
    }
    return 0;
}