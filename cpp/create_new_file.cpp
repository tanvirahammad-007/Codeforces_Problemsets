#include <bits/stdc++.h>
#define op() ios::sync_with_stdio(false), cin.tie(nullptr)

using namespace std;

int main()
{
    op();

    string st;
    getline(cin, st);
    int len = st.size();
    vector<int> v;
    for (int i = 0; i < len; i++)
    {
        if (st[i] == '.' || st[i] == ',')
        {
            v.push_back(i);
        }
        if (st[i] == ' ' || st[i] == '\'')
            st[i] = '_';
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        st.erase(v[i], 1);
    }

    st += ".cpp";
    ifstream check_file(st);

    if (check_file.good())
    {
        check_file.close();
    }
    else
    {
        ofstream file(st);
        file.close();
    }

    system(("start " + st).c_str());

    cout << st;
    return 0;
}