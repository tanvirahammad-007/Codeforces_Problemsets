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
            cin >> arr[i];
        int count{}, max{};
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                count++;
            if (count > max)
                max = count;
            if (arr[i] == 1)
            {
                count = 0;
            }
        }
        cout << max << endl;
    }
}