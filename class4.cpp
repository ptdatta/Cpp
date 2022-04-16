#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; //static default value 0
public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of emploee is " << id << " and the emploee number is " << count << endl;
    }
    static void getcount(void)             //static function
    {
        cout << "the value of count is " << count << endl;
    }
};
int employee ::count = 100;
int main()
{
    employee harry, rohan, parthib;
    //harry.id=1;
    // harry.count=1;  cannot do this as id and count are private

    harry.setdata();
    harry.getdata();
    employee ::getcount();

    rohan.setdata();
    rohan.getdata();
    employee ::getcount();

    parthib.setdata();
    parthib.getdata();
    employee ::getcount();
    return 0;
}