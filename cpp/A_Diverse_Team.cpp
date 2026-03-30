#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n{}, k{};
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> ans;
    vector<int> used(101);
    for (int i = 0; i < n; i++)
    {
        if (!used[arr[i]])
        {
            used.at(arr[i]) = 1;
            ans.push_back(i + 1);
            if (ans.size() == k)
                break;
        }
    }
    if (ans.size() < k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int x : ans)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}