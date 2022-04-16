#include <iostream>
#include <fstream>

using namespace std;

int main() {
   ofstream hout ("hello1.txt");    //connecting our file with hout stream
    string name;            //creating a name string and filling it  with the string entered by the user
   cout<<"enter your name ";       
  
   cin>>name;
   hout<<"my name is "<<name;    //writing a string to the file
   hout.close();

   ifstream hin("hello2.txt");
   string content;
   getline(hin,content);
   cout<<"the content of this file is: "<<content;    //Reading of a file
   hin.close();
    return 0;
}

/*
the useful classes for working with files in c++ are:
1.fstreambase
2.ifstream -->derived from fstreambase
3.ofstream -->derived from fstreambase

in order to work with files inC++,you will have to open it.
there are 2 ways to open a file:
1. using the constructor
2.using the member function open() of the class 
*/