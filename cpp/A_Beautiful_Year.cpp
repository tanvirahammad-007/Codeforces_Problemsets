#include <bits/stdc++.h>

using namespace std;

int main()
{
    string y;
    cin >> y;
    int x = stoi(y);
    int check{1};
    string z{};
    while (check)
    {
        check = 0;
        x++;
        z = to_string(x);
        sort(z.begin(), z.end());
        for (int i = 1; i < y.size(); i++)
        {
            if (z[i] == z[i - 1])
                check = 1;
        }
    }

    cout << x << endl;
    return 0;
}