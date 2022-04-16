#include<iostream>
using namespace std;

int main() {
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        c+=arr[i];
    }
    
    cout<<c;
    
    return 0;
}