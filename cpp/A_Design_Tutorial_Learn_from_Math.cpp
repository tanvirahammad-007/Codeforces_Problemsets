#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;
    
    if (n % 2 == 0) {
        cout << 4 << " " << n - 4 << "\n";
    } else {
        cout << 9 << " " << n - 9 << "\n";
    }
    
    return 0;
}