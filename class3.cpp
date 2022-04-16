//memory allocation


#include <iostream>
using namespace std;
class shop
{
    int itemID[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "enter id of your item " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "enter price  of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemID[i] << "is" << itemprice[i] << endl;
    }
}
int main()
{
    shop d;
    d.initcounter();
    d.setprice();
    d.setprice();
    d.setprice();
    d.setprice();
    d.displayprice();

    return 0;
}