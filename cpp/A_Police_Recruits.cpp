#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int police = 0;
    int crime = 0;
    int count = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x > 0)
            police += x;
        else
            crime = (x * -1);
        if (police == 0 && crime > 0)
        {
            count++;
            crime = 0;
        }
        else if (police >= crime && crime > 0)
        {
            police--;
            crime = 0;
        }
    }
    cout << count << endl;
}