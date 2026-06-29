#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false), cin.tie(nullptr)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * (b)) / gcd(a, b)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define br "\n"

using namespace std;

int main()
{
    op();

    int t{};
    cin >> t;

    while (t--)
    {
        string st;
        cin >> st;
        int size = st.size();
        vector<int> in;
        for (int i = 1; i < size; i+=2)
        {
            if (st[i] == st[i + 1])
            {
                in.push_back(i + 1);
            }
        }
        for (int i = in.size() - 1; i >= 0; i--)
        {
            st.erase(in[i], 1);
        }
        cout << st << br;
    }

    return 0;
}