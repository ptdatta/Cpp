#include<iostream>
using namespace std;

int main() {
   int n;
    cin >> n ;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
   
    cout<<"transpose is: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}