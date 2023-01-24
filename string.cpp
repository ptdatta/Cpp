#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    string str1(10, 'p');
    cout << str1 << endl
         << str;
    getline(cin, str); //multi input
    cout << str;
    string s1 = "fam";
    string s2 = "ily";
    cout << s1 + s2 << endl; //add
    s1.append(s2);
    cout << s1 << endl;
    cout << s1[1] << endl;
    string ab = "hhf udfhuhdf udhH IH"; //clear whole string
    ab.clear();
    cout << ab;
    string c1 = "abc";
    string c2 = "xyz"; //comparison
    cout << c2.compare(c1) << endl;
    string d1 = "edf";
    cout << d1 << endl; //non empty check
    if (!d1.empty())
        cout << "string is not empty" << endl;
    d1.clear(); //empty check
    if (d1.empty())
        cout << "string is empty";
    string j1 = "gdshgdgdgh"; //erase
    j1.erase(3, 3);
    cout << j1 << endl;
    cout << j1.find("h") << endl; //find
    j1.insert(2, "lol");          //insert
    cout << j1 << endl;
    cout << j1.size() << endl; //size
    for (int i = 0; i < j1.length(); i++)
        cout << j1[i] << endl;
    string j = j1.substr(6, 4); //getting substring
    cout << j << endl;
    string a1 = "789";
    int x = stoi(a1); //string to integer
    cout << x << endl;
    int x1 = 456;
    cout << to_string(x1) + "2" << endl; //integer to string

    string y1 = "fhafhuhufhchuh";
    sort(y1.begin(), y1.end()); //sort
    cout << y1 << endl;
    return 0;
}