#include <iostream>
using namespace std;
class employee
{                                                             //base class

public:
    int iD;
    float salary;
    employee(int inpid)
    {
        iD = inpid;
        salary = 65000.0;
    }
    employee() {}
};
// derived class syntax-->
// class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}{
//     class members/methos/etc...
// }
// note: 1.Default visibility mode is private.
//       2.privite visibility mode:public members of the bass class becomes private members of the bass class
//       3.public visibility mode:public members of the bass class becomes public members of the bass class
//       4.Private members are never inherited.
class programmer : public employee
{
public:                                                           //derived class
    programmer(int inpid)
    {
        iD = inpid;
    }
    int lc = 9;
};
int main()
{
    employee parthib(1), harry(2);
    cout << parthib.salary << endl;
    cout << harry.salary << endl;
    programmer skillf(1);
    cout << skillf.lc<<endl;
    cout<<skillf.iD;
    return 0;
}