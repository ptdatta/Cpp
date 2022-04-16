#include<iostream>
using namespace std;
int dtob(int n){
    int x=1,a=0;
    while(x<=n){
        x*=2;
    }
    while (x>0){
        int l=n/x;
        n-=l*x;
        x/=2;
        a=a*10+l;
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    cout<<dtob(n);
    return 0;
}