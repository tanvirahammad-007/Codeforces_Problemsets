#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (b > a)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        if ((a - b) == 0)
        {
            cout << "0" << endl;
            continue;
        }
        else if ((a - b) <= 10)
        {
            cout << "1" << endl;
            continue;
        }
        else
        {
            cout << (a - b + 9) / 10 << endl;
        }
    }
}