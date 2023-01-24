#include <iostream>
using namespace std;
class base
{
    int d1;

public:
    int d2;
    void setd();
    int getd1();
    int getd2();
};
void base ::setd(void)
{
    d1 = 10;
    d2 = 20;
}
int base ::getd1()
{
    return d1;
}
int base ::getd2()
{
    return d2;
}                                                         //if-->  
class derived : public base                             //class derived : private base
{
    int d3;

public:
    void process();
    void display();
};
void derived ::process()                                  //then-->
{                                                          //setd();
    d3 = d2 * getd1();
}
void derived ::display()
{
    cout << "value of data 1 is " << getd1() << endl;
    cout << "value of data 2 is " << d2 << endl;
    cout << "value of data 3 is " << d3 << endl;
}
int main()
{
    derived der;
    der.setd();
    der.process();
    der.display();

    return 0;
}