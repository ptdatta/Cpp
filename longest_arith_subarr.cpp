/* Approach-->
  Loop over the array.
  1.previous common diff(pd)
  2.current arithmatic subarray length(curr)
  3.max arithmatic subarray length(ans)
*/

#include <iostream>
using namespace std;

int main()
{
    int n, ans = 2;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pd = arr[1] - arr[0], j = 2, curr = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans;
    return 0;
}