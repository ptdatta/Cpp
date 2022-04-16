#include<iostream>
using namespace std;
int main()
{
    int a=3000;
    for (int date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(a==0){
            break;
        }
        cout<<"go out today\n";
        a=a-300;
    }
    return 0;
}

