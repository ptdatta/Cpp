#include <iostream>
using namespace std;

class bankdeposite
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    bankdeposite() {}
    bankdeposite(int p, int y, float r);
    bankdeposite(int p, int y, int r);
    void show();
};
bankdeposite ::bankdeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
bankdeposite ::bankdeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void bankdeposite ::show()
{
    cout << "principle amount was " << principal << endl
         << "return value after " << years << " is " << returnvalue << endl;
}
int main()
{
    bankdeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
   
    cin >> p >> y >> r;
    bd1 = bankdeposite(p, y, r);
    bd1.show();

    cin >> p >> y >> R;
    bd2 = bankdeposite(p, y, R);
    bd2.show();
    return 0;
}