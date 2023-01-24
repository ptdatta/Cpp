#include<iostream>
using namespace std;

int main() {
    enum meal{breakfast,lunch,dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
    cout<<endl;
    meal m1=lunch;
    cout<<m1;
    return 0;
}