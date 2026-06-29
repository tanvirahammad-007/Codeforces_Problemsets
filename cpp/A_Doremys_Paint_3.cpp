// #include <bits/stdc++.h>
// #define op() ios::sync_with_stdio(false); cin.tie(NULL);

// using namespace std;

// int main()
// {
//     op();

//     int t{};
//     cin >> t;
//     while (t--)
//     {
//         int n{};
//         cin >> n;
//         map<int, int> st;
//         for (int i = 0; i < n; i++)
//         {
//             int x{};
//             cin >> x;
//             st[x]++;
//         }
//         if (st.size() == 1)
//             cout << "YES" << endl;
//         else if (st.size() == 2)
//         {
//             int check{};
//             for (auto y : st)
//             {
//                 if (y.second == n / 2)
//                     check = 1;
//             }
//             if (check)
//                 cout << "YES" << endl;
//             else
//                 cout << "NO" << endl;
//         }
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }