#include<iostream>
using namespace std;

int main() {
    int n,c=-999999;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       c=max(c,arr[i]);
       cout<<c<<endl;
    }
   
    return 0;
}