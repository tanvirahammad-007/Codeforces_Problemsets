#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

bool comp(char &a, char &b)
{
    if (a == '(' && b == ')')
        return 1;
    else
        return 0;
}
int main()
{
    op();

    int t{};
    cin >> t;

    while (t--)
    {
        int n{};
        cin >> n;
        stack<char> st;
        while (n--)
        {
            char x{};
            cin >> x;
            if (!st.empty())
            {
                if (comp(st.top(), x))
                {
                    st.pop();
                }
                else
                    st.push(x);
            }
            else
                st.push(x);
        }
        cout << st.size() / 2 << "\n";
    }
    return 0;
}