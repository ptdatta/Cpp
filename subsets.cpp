#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
void sub(int a[],int n){
    for(int i=0;i<(1<<n);i++){
        for (int j=0;j<n;j++){
            if(i & (i<<j)){
                cout<<a[j]<<" ";
            }
        } cout<<endl;
    }
}
int main() {
   int a[4]={1,2,3,4};
 sub(a,4);
    return 0;
}