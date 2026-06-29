// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         int arr[n+5];
//         for (int i = 1; i <= n; i++)
//         {
//             scanf("%d", &arr[i]);
//         }
//         for (int i = 1; i <= n/2; i++)
//         {
//             if (arr[i] > arr[i * 2])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 2];
//                 arr[i + 2] = temp;
//             }
//         }
//         int check = 0;
//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 check = 1;
//             }
//         }
//         if (check)
//             printf("NO\n");
//         else
//             printf("YES\n");
//     }
// }