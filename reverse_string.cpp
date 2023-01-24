#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}
void pi(string s){
    if (s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){                            //convert pi to 3.14
        cout<<"3.14";
       pi(s.substr(2));
    } else {
        cout<<s[0];
        pi(s.substr(1));
    }
}
int main()
{
    reverse("binod");
    cout<<endl;
    pi("pihfgjpigfhgpi");
    return 0;
}