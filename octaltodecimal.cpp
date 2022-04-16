#include<iostream>
using namespace std;
int otod(int n){
    int a=0,b=1;
    while(n>0){
        int y=n%10;
        a+=b*y;
        b*=8;
        n/=10;
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    cout<<otod(n);
    return 0;

}
