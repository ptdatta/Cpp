#include<iostream>
using namespace std;
int btod(int n){
    int a=0,b=1;
    while(n>0){
        int y=n%10;
        a+=b*y;
        b*=2;
        n/=10;
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    cout<<btod(n);
    return 0;

}
