#include<iostream>
using namespace std;
int main()
{
   int a,sum=0;
   cin>>a;
   while(a>=0){
       sum=sum+ a;
       cin>>a;
   }
   cout<<sum;
   return 0;
}