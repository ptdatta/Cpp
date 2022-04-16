#include<iostream>
using namespace std;
int fac(int n){
    long long int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    cout<<f<<endl;
    return f ;
}
//by recurtion
int fact(int n){
    if(n<=1){
        return 1;
    }
     return n* fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    fac(n);
    cout<<fact(n);
    return 0;
}