#include <bits/stdc++.h>

using namespace std;

int main()
{
    string secret{};
    cin >> secret;

    for (int i = 0; i < secret.size(); i++)
    {
        if (secret[i] == '.')
            cout << 0;
        else if (secret[i] == '-' && secret[i + 1] == '.')
        {
            cout << 1;
            i++;
        }
        else if (secret[i] == '-' && secret[i + 1] == '-')
        {
            cout << 2;
            i++;
        }
    }
    cout << endl;
    return 0;
}