#include <iostream>                    //time complexity-->nlogn(best case)   n^2(worst case)
using namespace std;
void swap(int arr[], int i, int j)
{
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}
int p(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void qs(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = p(arr, l, r);
        qs(arr, l, pi - 1);
        qs(arr, pi + 1, r);
    }
}
int main()
{
  int arr[5]={5,4,3,2,1};
  qs(arr,0,4);
  for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
  }
  cout<<endl;
    return 0;
}