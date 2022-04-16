//inverted half pyramid


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int r=n;r>=1;r--){
        for(int c=1;c<=r;c++){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}