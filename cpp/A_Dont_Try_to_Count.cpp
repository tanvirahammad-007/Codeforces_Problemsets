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
//         int m{}, n{};
//         cin >> m >> n;
//         string s1, s2;
//         cin >> s1 >> s2;

//         int count{}, check{};
//         while (count <= 6)
//         {
//             if (s1.find(s2) != string::npos)
//             {
//                 check = 1;
//                 break;
//             }
//             count++;
//             s1 += s1;
//         }

//         if (check == 1)
//             cout << count << endl;
//         else
//             cout << -1 << endl;
//     }
// }