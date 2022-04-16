//amstrong no.-the number which is the sum of its digits qube like 153 -->1+125+9=153

#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int o=n;
int sum=0;
while(n>0){
    int l=n%10;
    sum += (l*l*l);
    n=n/10;
}
if (sum==o){
    cout<<"amstrong";
} else {
    cout<<"not amstrong";
}
return 0;    

}
