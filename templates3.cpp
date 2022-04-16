#include<iostream>
using namespace std;
template<class T1=int,class T2=float,class T3 = char>
class harry{
    public:
    T1 a;
    T2 b;
    T3 c;
    harry(T1 x, T2 y,T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display (){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};
int main() {
    harry <> h(4,50.3,'v');
    h.display();
    cout<<endl;
    harry <float,char,char> j(4.3,'o','v');
    j.display();
   
   
   
    
    return 0;
}