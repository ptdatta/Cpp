#include<iostream>
using namespace std;
inline int sum(int a, int b){
    static int c=0;             //if there is inline then don't use static
    c+=1;
    return a+b+c;

}
int main() {
   int a,b;
   cin>>a>>b;
   cout<<sum(a,b)<<endl;
    cout<<sum(a,b)<<endl;
     cout<<sum(a,b)<<endl;
      cout<<sum(a,b)<<endl;
       cout<<sum(a,b)<<endl;
      cout<<sum(a,b)<<endl;  
  
    
    return 0;
}