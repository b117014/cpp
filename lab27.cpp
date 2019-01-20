#include<iostream>
using namespace std;

void fun(int i) throw(double)
{
   if(i==1)
   {
     throw "A";
   }
   else if(i==2)
   {
    throw 10;
   }
   else if(i==3)
   {
   throw 5.6;
   }
}

int main()
{
  try
  {
    cout << "inside the try box" << endl;
    fun(3);
  }
  catch(double i)
  {
    cout << "inside the catch block" << endl;
    cout << "throw is = " << i << endl;
  }
  cout << "end" << endl;

   return 0;
}
