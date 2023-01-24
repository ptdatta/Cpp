#include<iostream>
using namespace std;
typedef struct employee
{
  int eId;
  char favchar;
  float salary;
}ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};
int main(){
    ep parthib;
    union money m1;
    m1.rice =23;
    m1.car='r';
    cout<<m1.rice<<m1.car ;
    return 0;
}
