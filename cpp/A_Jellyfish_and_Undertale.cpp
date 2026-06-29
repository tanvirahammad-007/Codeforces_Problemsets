// #include <bits/stdc++.h>
// #define op() ios::sync_with_stdio(false); cin.tie(nullptr);

// using namespace std;

// int main()
// {
//     op();

//     int t{};
//     cin >> t;

//     while(t--)
//     {
//         int a{}, b{}, n{};
//         cin >> a >> b >> n;
//         vector<int> v(n);
//         for(int i=0; i<n; i++)
//             cin >> v[i];

//         long long int ans = b-1;
//         for(int i=0; i<n; i++)
//         {
//             if(v[i] <= a) ans += v[i];
//             else ans += a;
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }