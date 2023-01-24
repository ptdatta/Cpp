#include<iostream>
using namespace std;
int fac(int n){
    long long int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    
    return f ;
}
int main()
{ 
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fac(i)/(fac(j)*fac(i-j))<<" ";
        }
        cout<<"\n";
    }
    return 0;
}