#include<iostream>
using namespace std;
void fib(int n){
    int t1=0,t2=1;
    int nt;
    for(int i=1;i<=n;i++){
        cout<<t1<<"\n";
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
    return;
}

//by recurtions
int fibo(int n){
    if (n<2){
        return 1;
    }
    return fibo(n-2) + fibo(n-1);
}
int main()
{
    int n;
    cin>>n;
    fib(n);
    cout<<"the term of fibonacci at position"<<n<<"is"<<fibo(n)<<"\t";
    return 0;
}