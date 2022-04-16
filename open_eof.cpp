#include<iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
   ofstream out;
   out.open("hello2.txt");
   out<<"this is me"<<endl;
   out<<"hgfdg yweg"<<endl;
   out.close();


   ifstream in;
   string st,st2;
   in.open("hello2.txt");
//    in>>st>>st2;
//    cout<<st<<st2;
while(in.eof()==0){
    getline(in,st);
    cout<<st<<endl;
}
   in.close();
    return 0;
}