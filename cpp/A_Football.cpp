#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;
    map<string, int> teams;
    while (n--)
    {
        string s;
        cin >> s;
        teams[s]++;
    }
    int max{};
    string winner;
    for(auto x : teams)
    {
        if(x.second > max)
        {
            winner = x.first;
            max = x.second;
        } 
    }

    cout << winner << "\n";
    
    return 0;
}