#include<iostream>
using namespace std;
int tilling(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilling(n-1) + tilling(n-2);
}
int fp(int n){
    if (n==0 || n==1 || n==2){
        return n;                                   //friends pairing
    }
    return fp(n-1) + fp (n-2)*(n-1);
}
int main() {
    cout<<tilling(4)<<endl;
    cout<<fp(4);
    return 0;
}