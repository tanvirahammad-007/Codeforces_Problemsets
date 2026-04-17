#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k{}, r{};
    cin >> k >> r;
    int count{1};
    int x = k;
    while (1)
    {
        if (x % 10 == 0 || x % 10 == r)
            break;
        x = k * (count + 1);
        count++;
    }
    cout << count << endl;
    return 0;
}