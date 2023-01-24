#include <iostream>
using namespace std;
class emploee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        cout << "enter the id of emploee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "the id of this emploee is" << id << endl;
    }
};
int main()
{
    emploee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}