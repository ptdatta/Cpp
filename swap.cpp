#include <iostream>
using namespace std;
int swap1(int a, int b)
{
    int n = a;
    a = b;
    b = n;
    return a;
}
int swap2(int a, int b)
{
    int n = a;
    a = b;
    b = n;
    return b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << swap1(a, b) << swap2(a, b);
    return 0;
}