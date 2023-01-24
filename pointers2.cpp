#include<iostream>
using namespace std;

int main() {
    // basic example
   int a=5;
   int* f= &a;
   cout<<*(f)<<endl;
   
   //new keyword
   int *p=new int(42);
   cout<<*p<<endl;

   int*arr=new int[3];
   arr[0]=10;
   *(arr+1)=20;      //same as          arr[1]
   arr[2]=30;
   delete[] arr;                   //delete operator

   cout<<arr[0]<<endl;
   cout<<arr[1]<<endl;
   cout<<arr[2]<<endl;

  

    return 0;
}