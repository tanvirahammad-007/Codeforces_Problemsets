#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int m{};
        if (arr[0] == arr[1])
            m = arr[0];
        else
            m = arr[2];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != m)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}