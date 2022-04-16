#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
int num(int n){
    int count=0;
    while(n){
        n=n & (n-1);
        count++;
    }
    return count;
}
int main() {
  cout<<num(19)<<endl;
    return 0;
}