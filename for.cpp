#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int a=1;a<=n;a++){
        sum=sum+a;
    }
    
    cout<<sum;
    return 0;
}