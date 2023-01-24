//parametarized constructure-->as it takes two parameter

#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int);
    void printdata()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    complex a(4, 6);                      //Implicit call
    complex b = complex(5, 7);            //Explicit call
    a.printdata();
    b.printdata();

    return 0;
}