#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
   string str="hsfdhfhah";
//    for(int i=0;i<str.size();i++){         //convert to upper case
//        if(str[i]>='a' && str[i]<='z')
//        str[i]-=32;
//    }
//    cout<<str<<endl;
//    for(int i=0;i<str.size();i++){
//        if(str[i]>='A' && str[i]<='Z')   //convert to lower case
//        str[i]+=32;
//    }
//    cout<<str;



//directly transfrom-->

transform(str.begin(),str.end(),str.begin(), :: toupper);
cout<<str<<endl;
transform(str.begin(),str.end(),str.begin(), :: tolower);
cout<<str<<endl;

    return 0;
}