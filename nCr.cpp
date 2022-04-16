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
    int n,r;
    cin>>n>>r;
    int c=fac(n)/(fac(r)*fac(n-r));
    cout<<c;
    return 0;
}