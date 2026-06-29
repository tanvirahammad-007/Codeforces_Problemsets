#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;

    int mikasa{}, chris{};
    while(n--)
    {
        int a{}, b{};
        cin >> a >> b;
        if(a > b) mikasa++;
        else if (a < b) chris++;
    }
    if(mikasa > chris) cout << "Mishka\n";
    else if(mikasa < chris) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
    return 0;
}