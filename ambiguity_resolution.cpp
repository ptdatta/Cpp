#include <iostream>
using namespace std;
//ambiguity 1-->
class base1
{
public:
    void greet()
    {
        cout << "how are you" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "kamon a6ho" << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};
// ambiguity 2-->
//  class B{
//      public:
//      void say(){
//          cout<<"hello world"<<endl;
//      }
//  };
//  class D : public B{
//      int a;
//      public:
//      void say(){
//          cout<<"hello my beautiful people"<<endl;
//      }
//  };
int main()
{
    //ambiguity 1-->
    base1 base1obj;                  //when use ambiguity 2 comment out ambiguity 1
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    d.greet();
  
    //ambiguity 2-->
    //    B b;
    //    b.say();
    //    D d;
    //    d.say();
    return 0;
}