#include<iostream>
using namespace std;
bool vot(int a){
    if(a>18){
        return true;
    } else {
        return false;
    }
}
int main(){
    int a;
    cin>>a;
    if(vot(a)){
        cout<<"you can vot";
    } else {
        cout<<"you cannot vot";

    }
    return 0;
}

