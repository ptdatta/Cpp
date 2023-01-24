#include <iostream>
using namespace std;
void sub(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    sub(ros, ans);
    sub(ros, ans + ch);
}
void asub(string n, string a)
{
    if (n.length() == 0)
    {
        cout << a << endl;
        return;
    }
    char c = n[0];
    int code = c;
    string aros = n.substr(1);
    asub(aros, a);
    asub(aros, a + c);
    asub(aros, a + to_string(code));
}
int main()
{
    sub("ABC", "");
    cout << endl;
    asub("AB", "");
    cout << endl;
    return 0;
}