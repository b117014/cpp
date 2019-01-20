#include<iostream>
using namespace std;

void fun(int i)
{
  if(i==1)
  {
    throw "A";
  }
  else if(i==2)
  {
     throw 2.5;
  }
  else if(i==3)
  {
    throw 10;
  }
}

int main()
{

   try {
       cout << "inside the try block" << endl;
        fun(2);

   }
   catch(...)
   {
       cout << "caught an exception" << endl;
   }
   return 0;


}
