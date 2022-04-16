#include<iostream>
using namespace std;
typedef struct employee
{
  int eId;
  char favchar;
  float salary;
}ep;


int main() {
  ep parthib;
   parthib.eId=1;
   parthib.favchar='x';
   parthib.salary=21000000;
   cout<<parthib.eId;
   cout<<parthib.favchar;
   cout<<parthib.salary;
    return 0;
}