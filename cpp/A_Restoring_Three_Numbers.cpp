#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w{}, x{}, y{}, z{};
    cin >> w >> x >> y >> z;
    int sum = max({w, x, y, z});
    vector<int> arr{w, x, y, z};
    for (auto t : arr)
    {
        if (sum - t == 0)
            continue;
        cout << sum - t << " ";
    }
    cout << endl;
    return 0;
}