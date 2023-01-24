#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_num(int);
    void get_roll_num(void);
};
void student ::set_roll_num(int r)
{
    roll_number = r;
}
void student ::get_roll_num()
{
    cout << "the roll number is " << roll_number << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks()
{
    cout << "the marks of maths is " << maths << endl;
    cout << "the marks of physics is " << physics << endl;
}
class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_roll_num();
        get_marks();
        cout << "the percentage is " << (maths + physics) / 2 << endl;
    }
};
int main()
{
    result parthib;
    parthib.set_roll_num(420);
    parthib.set_marks(99.0, 98.0);
    parthib.display();
    return 0;
}

/*
Notes:
   1.if we are inheriting B from A and C  from B:[a-->b-->c]
   2.A is the base class for B and B is the base class for C
   3.A-->B-->C is called inheritance path.
*/