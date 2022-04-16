#include <iostream>
using namespace std;
template <class T>
class harry
{
public:
    T data;
    harry(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void harry<T>::display()
{
    cout << data;
}
void func(int a)
{
    cout << "i am first func()" << a << endl;
}
template <class T>
void func(T a)
{
    cout << "i am templatized  func()" << a << endl;
}
int main()
{
    //    harry<int> h(5);
    //    cout<<h.data<<endl;
    //    h.display();

    func(4);          //exart match takes the highest priority
    return 0;
}