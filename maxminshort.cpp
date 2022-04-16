#include<iostream>
using namespace std;
int max(int x,int y,int z){
    int a=max(x,max(y,z));
   
    return a;
   
}
int min(int x,int y,int z){
    
    int b=min(x,min(y,z));
   
    return b;
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<max(x,y,z)<<" "<<min(x,y,z);
    return 0;
}