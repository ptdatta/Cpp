//use for long if else
//saying hello in different languages

#include <iostream>
using namespace std;
int main()
{
    char button;
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "hello";
        break;
    case 'b':
        cout << "namaste";
        break;
    case 'c':
        cout << "hola";
        break;
    case 'd':
        cout << "ciao";
        break;
    default:
        cout << "i am still learning more";
        break;
    }
    return 0;
}
