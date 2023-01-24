#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  char a[n];
  cin>>a;
  bool check=1;
  for(int i=0;i<n;i++ ){
      if (a[i]!= a[n-1-i]){
          check =0;
         
      }
  }
  if (check ==true){
  cout<<"palindrone"<<endl;
  }
  else {
      cout<<"not palindrone"<<endl;
  }
    return 0;
}