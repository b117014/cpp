
#include<iostream>
using namespace std;

class my
{
     private: static int x;
    public :
      my()
      {
             x=x+1;
      }
      void display()
      {
         cout << "number of object is =" << x;
      }
};

int my:: x=0;

int main()
{
  my ob1,ob2,ob3,ob4,ob5;
  my ob;
  ob.display();
  return 0;


}
