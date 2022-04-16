//Floyd's Triangle


#include<iostream>
using namespace std;
int main()
{
    int n,p=1;
    cin>>n;
    for (int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
         if(j<=i){
             cout<<p<<" ";
             p=p+1;
         } else {
             cout<<" ";
         }
     }   
     cout<<endl;
    }
    return 0;
}