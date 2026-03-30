#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> score;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        score.push_back(x);
    }
    int count{};
    int max = score.at(0);
    int min = score.at(0);
    for (int i = 1; i < n; i++)
    {
        if (max > score.at(i))
        {
            max = score.at(i);
            count++;
            continue;
        }
        if (min < score.at(i))
        {
            min = score.at(i);
            count++;
            continue;
        }
    }
    cout << count << endl;
    return 0;
}