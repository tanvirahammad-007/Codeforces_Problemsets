// #include <bits/stdc++.h>
// #define op()                     \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr);

// using namespace std;

// int main()
// {
//     op();

//     int t{};
//     cin >> t;
//     while (t--)
//     {
//         string str;
//         cin >> str;

//         int n = str.size();
//         if (n < 4)
//         {
//             cout << "YES\n";
//             continue;
//         }
//         if (int pos = str.find("aa") != string::npos)
//         {
//             str[pos] = 'b';
//             str[pos + 1] = 'b';
//         }
//         else if (int pos = str.find("bb") != string::npos)
//         {
//             str[pos] = 'a';
//             str[pos + 1] = 'a';
//         }
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (str[i] == str[i + 1])
//             {
//                 int j;
//                 int x{};
//                 for (j = i + 1; j < n - 1; j++)
//                 {
//                     if (str[j] == str[j + 1])
//                     {
//                         x++;
//                         reverse(str.begin() + i + 1, str.begin() + j + 1);
//                         break;
//                     }
//                 }
//                 if (j == n - 1 && x == 0)
//                     reverse(str.begin() + i + 1, str.begin() + j + 1);
//                 break;
//             }
//         }
//         if (str.find("aa") != string::npos || str.find("bb") != string::npos)
//             cout << "NO\n";
//         else
//             cout << "YES\n";
//     }

//     return 0;
// }