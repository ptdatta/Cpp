// ++a pre incrementor operator
//a++ post incrementor operator


#include<iostream>
using namespace std;
int main()
{
    int d,a=1,b=3,f=9,e=4;
d=++a + b++ + --f - e--;
cout<<d;
return 0;
}
