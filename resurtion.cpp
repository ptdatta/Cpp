#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }                                    //sum
    int prevsum = sum(n - 1);
    return n + prevsum;
}
int power(int n, int p)
{
    if (p == 0)
    {
        return 1;                        //power
    }
    int po = power(n, p - 1);
    return n * po;
}
int fact(int n)
{
    if (n == 0)
    {                                //factorial
        return 1;
    }
    return n * fact(n - 1);
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }                               //fibonaci
    if (n == 1)
    {
        return 1;
    }
    return (fib(n - 1) + fib(n - 2));
}
int main()
{
    cout << sum(5) << endl;
    cout << power(4, 3) << endl;
    cout << fact(6) << endl;
    cout << fib(5);
    return 0;
}