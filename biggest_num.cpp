#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
   string s="646484645681";
   sort(s.begin(),s.end(),greater<int>());
   cout<<s<<endl;
    return 0;
}