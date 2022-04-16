//OOPs - classes and Objects

//C++--->initially called-->C with classes by stroustroup
//class-->extension of structures(in C)
//structures and limitations
//        -->members and public
//        -->no methods
// classes-->structure +  more
// classes-->can have methods and properties
// classes-->can makes few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/*   class emolyee{
           class defination
           }parthib,harry,aman;   */

// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;
class binary
{
//private:                                if I did this then noone will use this chk_bin
      string s;
     // void chk_bin(void);
public:
      void read(void);
      void chk_bin(void);
      void ones(void);
      void display(void);
};

void binary ::read(void)
{
      cin >> s;
}
void binary ::chk_bin(void)
{
      for (int i = 0; i < s.length(); i++)
      {
            if (s.at(i) != '1' && s.at(i) != '0')
            {
                  cout << "incorrect binary format" << endl;
                  exit(0);
            }
      }
}
void binary ::ones(void)
{
      chk_bin();
      for (int i = 0; i < s.length(); i++)
      {
            if (s.at(i) == '0')
            {
                  s.at(i) = '1';
            }
           else if (s.at(i) == '1')
            {
                  s.at(i) = '0';
            }
      }
}
void binary ::display(void)
{
      for (int i = 0; i < s.length(); i++)
      {
            cout << s.at(i);
      }
}
int main()
{

      binary b;
      b.read();
      
      b.ones();
      b.display();
      return 0;
}
