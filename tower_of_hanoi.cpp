#include<iostream>
using namespace std;
void toh(int n,char s,char d,char h){
  if(n==0){
    return;
  }
  toh (n-1,s,h,d);
  cout<<"move from "<< s<<" to "<< d<<endl;
  toh(n-1,h,d,s);
}
int main() {
  toh(3,'A','B','C');
  return 0;
}