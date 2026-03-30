#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int width = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= h)
            width++;
        else
            width += 2;
    }
    cout << width << endl;
}
