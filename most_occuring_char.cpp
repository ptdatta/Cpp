#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
   string s="hdauhfuehqhuraaaaahuh";
    int f[26];
    for(int i=0;i<26;i++){
      f[i]=0;
    }
    for (int i=0;i<s.size();i++)
    f[s[i]-'a']++;

    char ans='a';
    int maxf=0;
     for (int i=0;i<26;i++){
         if(f[i]>=maxf)
         {
             maxf=f[i];
             ans =i+'a';
         }
     }
cout<<maxf<<" "<<ans<<endl;
    return 0;
}