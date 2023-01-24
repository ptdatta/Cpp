/*
syntax for initialization list in constructor:
constructor (argument-list): initialization - section
{
    assignment + other code;
}
*/

#include <iostream>
using namespace std;
class test
{
    int a;
    int b;

public:
    // test (int i,int j): a(i),b(j)         or
    //test(int i, int j) : a(i), b(j + i)            or
    // test (int i,int j): b(j),a(i+b)        RED FLAG this will create problems bacause a will initialize 1st
    test(int i, int j) : a(i), b(a + j)      // also           test (int i, int j): a(i)
    {                                                      // {                                   *a too
        cout << "constructor executed" << endl;            //  b=j;
        cout << "value of  a  is " << a << endl;           //   ...............
        cout << "value of  b  is " << b << endl;           //  }
    }
};
int main()
{
    test p(4, 5);

    return 0;
}