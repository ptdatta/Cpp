/*
                                public derivation             private derivation         proteched derivation
    1.private members              not inherited                 not inherited             not inherited
    2.proteched "                   proteched                    private                     protected
    3.public    "                   public                       private                     proteched     
*/

#include<iostream>
using namespace std;
class base{
    protected:                                            
    int a;
    private:
    int b;
};
class derived : protected base{};
int main() {
   base b;
   derived d;
   //cout<<d.a;             Not worked as it's protected in both base and derived class
    
    return 0;
}