#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    number(number &obj)                                //when no copy constructure is found,compilar supplies 
    {                                                  // its own copy constructure
        cout << "copy cinstructure called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number of this object is" << a << endl;
    }
};
int main()
{
    number x, y, z(45),z2;
     x.display();
    y.display();
    z.display();
    number z1(x);            //copy constructure invoked
    z1.display();
    z2=z;                     //copy constructure will not call
    number z3=z;               //copy constructure invoked

    return 0;
}



