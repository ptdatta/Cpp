#include <iostream>
using namespace std;
class student
{
    string name;

public:
    int age;
    bool gender;
    student()
    {
        cout << "default constructore"<<endl;
    }  //copy constructure

    student(string s, int a, int g)
    {
        name = s;
        age = a;
        gender = g;
    } // parameterised constructor

    student (student &a){
        name=a.name;
        age=a.age;
        gender=a.gender;
    }  //copy  constructure

    ~student(){
        cout<<"distructure called"<<endl;
    }
    void setname(string s)
    {
        name = s;
    }

    void getname()
    {
        cout << name << endl;
    }

    void printinfo()
    {
        cout << "name= ";
        cout << name << endl;
        cout << "age= ";
        cout << age << endl;
        cout << "gender= ";
        cout << gender << endl;
    }

    bool operator == (student  &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};
int main()
{
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "name= ";
    //     cin >> s;
    //     arr[i].setname(s);
    //     cout << "age= ";
    //     cin >> arr[i].age ;
    //     cout << "gender= ";
    //     cin >> arr[i].gender ;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printinfo();
    // }

    student a("parthib", 20, 1);
    a.printinfo();
    student b("rahul",21,0);
    student c=a;
    if(b==a){
        cout<<"same"<<endl;
    } else {
        cout<<"not same"<<endl;
    }
    return 0;
}