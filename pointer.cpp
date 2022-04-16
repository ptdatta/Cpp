#include<iostream>
using namespace std;

int main() {
    int a=5;    
    int* b=&a;   //&-->(address of) operator,,   *--->(value at)dereference operator
    int **c=&b;  //** pointer to pointer

    int ***d=&c;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}