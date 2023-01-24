//Constructor is a speciel member function with same name as of the class.
//It is automatically invoked whenever an object is created.
//It is used  to initialliz the objects of the class.



//default contructure
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:                          //creating a constructure
    complex(void);               //constructor declaration

    void printdata()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
complex ::complex(void)
{                                   //default contrutor as it takes no parameters.
    a = 10;
    b = 9;
}

int main()
{
    complex c;
    c.printdata();

    return 0;
}

/* Properties od constructor-->
  1.it should be declared in the public section of the class.
  2.they are automatically invoked whenever the object is created.
  3.they cannot return values and do not have return types.
  4.it can have default arguments.
  5.we cannot refer to their address.

*/