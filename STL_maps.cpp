#include<iostream>
#include<map>         //map is an associative array
#include<string>
using namespace std;

int main() {
   map<string ,int >marksmap;
   marksmap["parthib"]=99;
   marksmap ["harry"]=56;
   marksmap["upal"]=3;
   marksmap.insert({{"arrow",15},{"kuroo",89}});
   map<string, int> :: iterator iter;
   for(iter=marksmap.begin();iter!=marksmap.end();iter++){
       cout<<(*iter).first<<" "<<(*iter).second<<"\n";
   }
cout<<"the size is: "<<marksmap.size()<<endl;
cout<<"the max size is: "<<marksmap.max_size()<<endl;
cout<<"the empty return value is: "<<marksmap.empty()<<endl;
    return 0;
}