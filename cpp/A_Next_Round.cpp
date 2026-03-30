#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n{}, k{};
    cin >> n >> k;
    vector<int> arr;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int count{};
    if (arr.at(k - 1) == 0)
    {
        for (auto x : arr)
        {
            if (x > arr.at(k - 1))
                count++;
        }
        cout << count << endl;
        return 0;
    }
    for (auto x : arr)
    {
        if (x >= arr.at(k - 1))
            count++;
    }
    cout << count << endl;
    return 0;
}