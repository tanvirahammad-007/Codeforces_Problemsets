#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int t{};
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        if((unique(str.begin(), str.end())- str.begin()) == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        int count{};

        for(int i=0; i< str.size()-1; i++)
        {
            if(str[i] == str[i+1]) count++;
        }

        if(count > 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}