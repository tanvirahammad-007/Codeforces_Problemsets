// #include <bits/stdc++.h>
// #define op() ios::sync_with_stdio(false); cin.tie(nullptr);

// using namespace std;

// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;

//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     op();

//     int a{}, b{};
//     cin >> a >> b;
//     int x = a + 1;

//     while (!isPrime(x))
//         x++;

//     if (x == b)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
//     return 0;
// }