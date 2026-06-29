// #include <bits/stdc++.h>
// #define op() ios::sync_with_stdio(false); cin.tie(nullptr);

// using namespace std;

// int main()
// {
//     op();

//     int n{}, a{}, b{}, c{};
//     cin >> n >> a >> b >> c;

//     int f = min({a, b, c});
//     int g = max({a, b, c});
//     int mid = (a + b + c) - f - g;
//     int d = min({a, b, c});

//     if (n % d == 0)
//         cout << n / d << "\n";
//     else
//     {
//         int cnt{};
//         int sum{};
//         while (sum != n)
//         {
//             if (sum + mid == n || sum + g == n)
//             {
//                 cnt++;
//                 break;
//             }
//             sum += d;
//             cnt++;
//         }
//         cout << cnt << "\n";
//     }
//     return 0;
// }