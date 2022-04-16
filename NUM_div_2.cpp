#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
bool  power2(int n){
    return (n && !(n & n-1)) ;
}
int main() {
   cout<<power2(14)<<endl;
    return 0;
}