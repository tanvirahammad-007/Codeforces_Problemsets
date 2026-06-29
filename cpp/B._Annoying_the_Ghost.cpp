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
//         int n{};
//         cin >> n;
//         vector<int> a(n), b(n);
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         for (int i = 0; i < n; i++)
//             cin >> b[i];

//         int count{};
//         bool ck = false;
//         // for(int i=0; i<n-1; i++)
//         // {
//         //     if(a[i] > b[i])
//         //     {
//         //         int j{};
//         //         for(j=i+1; j<n; j++)
//         //         {
//         //             count++;
//         //             if(a[j] < b[j] && b[i]<=a[j])
//         //             {
//         //                 swap(a[i] , a[j]);
//         //                 break;
//         //             }
//         //         }
//         //         if(j == n) ck = true;
//         //     }
//         //     if(ck) break;
//         // }

//         // while (1)
//         // {
//         //     int x{};
//         //     for (int i = 0; i < n-1; i++)
//         //     {
//         //         if (a[i] > b[i])
//         //         {
//         //             int j{};
//         //             for (j = i + 1; j < n; j++)
//         //             {
//         //                 swap(a[j],a[j-1]);
//         //             }
//         //             count++;
//         //             x++;
//         //             break;
//         //         }
//         //     }
//         //     if(x == 0)
//         //         break;
//         // }

//         while (!is_sorted(a.begin(), a.end()))
//         {
//             for (int i = n - 1; i >= 1; i--)
//             {
//                 if (a[i] < a[i - 1])
//                 {
//                     swap(a[i], a[i - 1]);
//                     count++;
//                 }
//             }
//             {
//                 ck = true;
//                 break;
//             }
//         }
//         if (ck)
//             cout << -1 << endl;
//         else
//             cout << count << endl;
//     }
//     return 0;
// }