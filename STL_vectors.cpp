#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout << "displaying the vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        cout << v.at(i) << " "; //double print
    }
    cout << endl;
}
int main()
{
    //ways to creat a vector
    vector<int> vec1;        //zero length vector
    vector<char> vec2(4);    //4-element vector
    vector<char> vec3(vec2); //4-element charcter  vector from vec2
    vector<int> vec4(6, 3);
    vec2.push_back('5'); //for entering
    display(vec4);
    cout << vec4.size();

    int element, size = 5;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter an element to add to this vector ";
        cin >> element;
        vec1.push_back(element);
    }
    vec1.pop_back();  //for deleting the last digit

    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 1, 100, 566);
    display(vec1);
    return 0;
}