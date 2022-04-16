#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for( int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<n-i+1;

        }
        cout<<endl;
    }
    return 0; 
}