//print only which are not divisible by 3

#include<iostream>
using namespace std;
int main()
{
    int a;
    for (a=1;a<=100;a++){
        if (a%3==0){
            continue;
        }
        else{
            cout<<a<<"\n";
        }
    }
    return 0;
}