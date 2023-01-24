#include<iostream>
using namespace std;
class ac{
    public:
    void fun(){
        cout<<"i am a function with no arguments"<<endl;
    }
    void fun(int x){
        cout<<"i am a function with int arguments"<<endl;
    }
    void fun (double x){
        cout<<"i am a function with double arguments"<<endl;
    }
};

int main() {
    ac obj;
    obj.fun();
    obj.fun(4);
    obj.fun(4.3);
    return 0;
}