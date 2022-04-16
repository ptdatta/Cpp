#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
int getbit(int n,int pos){
    return ((n>>pos) & 1);
}
int setbit(int n,int pos){
    return (n | (1<<pos));
}
int clearbit(int n,int pos){
    int mask=~(1<<pos);
    return (n & mask);
}
int updatebit(int n, int pos,int value){
    int mask=~(1<<pos);
    n=n & mask;
    return( n | (value<<pos));
}
int togglebit(int n,int pos){
    return (n xor (1<<pos));
}
int main() {
  cout<<getbit(5,2)<<endl;
  cout<<setbit(3,2)<<endl;
  cout<<clearbit(5,2)<<endl;
  cout<<updatebit(5,2,0)<<endl;
  cout<<togglebit(5,1);
    return 0;
}