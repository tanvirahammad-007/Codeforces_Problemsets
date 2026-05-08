#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    op();

    int n{};
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x{};
        cin >> x;
        st.insert(abs(x));
    }

    cout << *st.begin() << endl;
}
