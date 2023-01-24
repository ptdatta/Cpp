#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (j<=n-i){
                cout<<" ";
            } else {
                cout<<"*"<<" ";
            }
        }   
       for(int j=n-i;j>=1;j--){
           cout<<"*"<<" ";
       }
        
        cout<<endl;
    }
    return 0;
}