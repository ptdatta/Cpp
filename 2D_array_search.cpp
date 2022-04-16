//Bruthforce approach
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, m, x = 12;
//     cin >> n >> m;
//     int a[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     cout << "matrix is: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//     bool flag = false;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i][j] == x)
//             {
//                 cout << "coordinates are: " << i << " " << j << endl;
//                 flag = true;
//             }
//         }
//         cout << endl;
//     }
//     if (flag)
//     {
//         cout << "element found" << endl;
//     }
//     else
//     {
//         cout << "element is not found";
//     }
//     return 0;
// }

//Better approach(if row,column of array is sorted)
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    bool found = false;
    int r = 0, c = n - 1;
    while (r < m && c >= 0)
    {
        if (mat[r][c] == target)
        {
            found = true;
        }
       if (mat[r][c] > target) {
           c--;
       }else {
           r++;
       }
    }
    if (found)
        cout << "Found";
    else
        cout << "Not Found";
}