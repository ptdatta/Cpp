#include<iostream>
using namespace std;
string kpa[]={"","abc","def","ghi","jkl","mno","pqr","swx","yz"};
void kp(string s,string ans){
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch=s[0];
    string code = kpa[ch-'0'];
    string ros =s.substr(1);
    for (int i=0;i<code.length();i++){
        kp(ros,ans + code[i]);
    }
}

int main() {
    kp("23","");
    return 0;
}