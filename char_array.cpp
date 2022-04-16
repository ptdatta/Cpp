#include <iostream>
using namespace std;

int main()
{
    char a[100] = "apple";
    int i = 0;                         //cin>>a   -->for input
    while (a[i] != '\0')
    {
        cout << a[i] << endl;
        i++;
    }
    cout<<a[2];
    return 0;
}