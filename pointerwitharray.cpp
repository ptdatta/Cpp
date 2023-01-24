#include<iostream>
using namespace std;

int main() {
   int arr[4]={12,56,41,23};
   int* p=arr;
   cout<<*(p++)<<endl;
   cout<<*(++p)<<endl;
   cout<<*p;
   cout<<*(p+1);
   cout<<*(p+2);
   cout<<*(p+3);
    
    return 0;
}