#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
private: double a,b,c;

public:
   void get(double x,double y,double z)
   {
       a=x;
       b=y;
       c=z;
   }
   void area(){
      double s=(a+b+c)/2;
      double result=sqrt(s*(s-a)*(s-b)*(s-c));
      cout << "area is =" << result;
   }
};
int main()
{
     double x,y,z;
     cout << "enter sides a , b, c" << endl;
     cin >> x >> y >> z;
     Triangle ob;
     ob.get(x,y,z);
     ob.area();
     return 0;
}
