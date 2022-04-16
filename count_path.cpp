#include<iostream>
using namespace std;
int cp(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int c=0;
    for(int i=1;i<=6;i++){
        c += cp(s+i,e);
    }
    return c;
}
int cpm(int n,int i,int j){
    if (i==n-1 && j==n-1){
        return 1;
    }
    if (i>=n || j>=n){
        return 0;
    }
    return cpm(n,i+1,j) + cpm(n,i,j+1);
}
int main() {
    cout<<cp(0,3)<<endl;
    cout<<cpm(3,0,0);
    return 0;
}