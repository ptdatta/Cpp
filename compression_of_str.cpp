#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
   string s="asaaaaassdsssss";
   char ans[100];
   ans[0]=s[0];
   int c=1;
   for(int i=1;i<s.size();i++){
       if (s[i]!=s[i-1]){
           ans[c]=s[i];
           c++;
       }
   }
   cout<<ans<<endl;
    return 0;
}