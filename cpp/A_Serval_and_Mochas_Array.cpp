// #include <bits/stdc++.h>
// #define op() ios::sync_with_stdio(false); cin.tie(nullptr);

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
//         vector<int> v(n);
//         for (auto &x : v)
//         {
//             cin >> x;
//         }

//         bool ok = false;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (gcd(v[i], v[j]) <= 2)
//                 {
//                     ok = true;
//                     break;
//                 }
//             }
//             if (ok)
//                 break;
//         }

//         cout << (ok ? "YES" : "NO") << endl;
//     }
//     return 0;
// }