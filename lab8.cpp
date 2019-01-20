#include<iostream>
#include<cmath>
using namespace std;

class shape{
};

class Triangle
{

  public:
     void area(double p,double q,double r){
             double s=(p+q+r)/2;
         double result=sqrt(s*(s-p)*(s-q)*(s-r));
         cout << "area of triangle is =" << result <<endl;
     }


};

class square : public shape
{

public:
  void area(double x)
  {
    cout << "area of square is =" << x*x << endl;
  }
};


int main()
{
int ch;

double a,b,c,l;
  cout << "enter 1 for area of Triangle"<<endl;
  cout << "enter 2 for area of square "<< endl;
  cin >> ch;
  switch(ch)
  {
    case 1 :
    cout << "enter a ,b, c" << endl;
            cin >> a >> b >> c;
            Triangle obj;
            obj.area(a,b,c);
            break;
    case 2:
      cout << "enter length" << endl;
       cin >> l;
          square obj1;
          obj1.area(l);
          break;
  }
  return 0;

}
