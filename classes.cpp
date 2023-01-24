#include<iostream>
using namespace std;
class emploee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a,int b,int c);          //Declaration
    void getData(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }
};
void emploee :: setData(int a1, int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main() {
       emploee parthib;
       parthib.d=32;
       parthib.e=56;
       parthib.setData(1,8,9);
       parthib.getData();
     
    return 0;
} 