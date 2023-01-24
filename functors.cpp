// function objects:function wrapped in a class so that it avalible like an object

#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main() {
    int arr[]={1,65,8,9,41,23,5,7};
    // sort(arr,arr+5);    //til 5th element
    sort(arr,arr+8,greater<int>());
    for (int  i = 0; i < 8; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}