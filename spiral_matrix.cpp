#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    //spiral order print-->
    int rst = 0, rnd = n - 1, cst = 0, cnd = m - 1;
    while (rst <= rnd && cst <= cnd)
    {
        for (int col = cst; col <= cnd; col++)
        {
            cout << a[rst][col] << " "; //for row start
        }
        rst++;
        for (int row = rst; row <= rnd; row++)
        {
            cout << a[row][cnd] << " "; //for column end
        }
        cnd--;
        for (int col = cnd; col >= cst; col--)
        {
            cout << a[rst][col] << " "; //for row end
        }
        rnd--;
        for (int row = rnd; row >= rst; row--)
        {
            cout << a[row][cst] << " "; //for column start
        }
        cst++;
    }
    return 0;
}