#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    void getdata()
    {
        cout << "the real part is " << r << endl;
        cout << "the imaginary part is " << i << endl;
    }
    void setdata(int a, int b)
    {
        r = a;
        i = b;
    }
};
int main()
{
    // complex c1;
    // complex *ptr = &c1;      or
    complex *ptr=new complex;
    ptr->setdata(1, 56);  //or   (*ptr).setdata(1,56);
    ptr->getdata();       // or     (*ptr).getdata();

    //array of objects
      complex *ptr1=new complex[4];
    ptr1->setdata(1, 5);  
    ptr1->getdata();     
    return 0;
}