// Destructure never takes an argument nor does it return any values


#include<iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"this is the time when constructure is called for object number"<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when my destrutor is called"<<count<<endl;
        count--;
    }
};
int main() {
    cout<<"we are inside our main function"<<endl;
    cout<<"creating 1st object n1 "<<endl;
    num n1;
    {
      cout<<"entering this block"<<endl;
      cout<<"creating two more objects"<<endl;
      num n2,n3;
      cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
    
    return 0;
}