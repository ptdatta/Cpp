#include <iostream>
using namespace std;
bool sorted(int a[], int n)
{
    if (n == 1)
    {
        return true;                  //sort or not
    }
    bool rest = sorted(a + 1, n - 1);
    return (a[0] < a[1] && rest);
}
void dec(int n)
{
    if (n == 0)
    {
        return;
    }                                           //decreasing order print
    cout << n << endl;
    dec(n - 1);
}
void ine(int n)
{
    if (n == 0)
    {
        return;                         //incresing order print 
    }
    ine(n - 1);
    cout << n << endl;
}
int first(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){                       //finding in an array(1st occurence)
        return i;
    }
 return first(arr,n,i+1,key);
}
int last(int arr[],int n,int i,int key){
     if(i==n){
        return -1;
    }
   int restarray=last(arr,n,i+1,key);                    //finding in an array(last occurence)
   if(restarray!=-1){
       return restarray;
   }
   if(arr[i]==key){
       return i;
   }
   return -1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int arr[]={4,2,1,2,5,2,7};
    cout << sorted(a, 6) << endl;
    dec(4);
    ine(4);
    cout<<first(arr,7,0,2)<<endl;
    cout<<last(arr,7,0,2)<<endl;
    return 0;
}