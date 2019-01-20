#include<iostream>
using namespace std;

void f(int x=5,int y=6)
{

  cout << x+y << endl;
}

void f(int x=10)
{
  cout << x*x << endl;
}

int main()
{

 f(20,30);
 f(2);
 return 0;
}
