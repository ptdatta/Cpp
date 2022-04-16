#include<iostream>
using namespace std;
int main()
{
     int n,k=1;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(j==0 || i== 0){
                k=1;
            } else {
                k=k*(i-j+1)/j;
            } cout<<k<<" ";
        }
        cout<<endl;
    } 
    return 0;
}