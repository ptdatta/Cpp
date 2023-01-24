#include<iostream>
#include<stack>
using namespace std;
void reverse(string s){
 stack<string>st;
 for(int i=0;i<s.length();i++){
     string word="";
     while(s[i]!=' '  && i<s.length()){
         word+=s[i];
         i++;
     }
     st.push(word);
 }
 while(!st.empty()){
   cout<<st.top()<<" ";
   st.pop();
 }
 cout<<endl;
}
void insertatbottom(stack<int> &st1,int ele){
    if(st1.empty()){
        st1.push(ele);
        return;
    }
    int topele=st1.top();
    st1.pop();
    insertatbottom(st1,ele);
    st1.push(topele);
}
void reversenum(stack <int> &st1){
    if(st1.empty()){
        return;
    }
    int ele=st1.top();
    st1.pop();
    reversenum(st1);
    insertatbottom(st1,ele);
}
int main() {
    string s="hey, how are you doing?";
     reverse(s);
     stack <int> st1;
     st1.push(1);
     st1.push(2);
     st1.push(3);
     st1.push(4);
     reversenum(st1);
     while(!st1.empty()){
         cout<<st1.top()<<endl;
         st1.pop();
     }
     cout<<endl;
    return 0;
}