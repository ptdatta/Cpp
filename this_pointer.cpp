#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A& setdata(int a){
        this->a=a;  
        return* this;                                       //this is a keyword which points to the object
    }                                                       //which invokes the member function.
     void getdata(){
         cout<<"the value of a is "<<a<<endl;
     }
};

int main() {
   A a;
   a.setdata(4).getdata();
  
    return 0;
}