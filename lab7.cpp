#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

class Triangle
{
   protected: double a,b,c;
   public :
      Triangle(double x,double y,double z):a(x),b(y),c(z){}
      void check();
      double area(double p,double q)
      {
         p=a;
         q=b;
         double result=(0.5)*p*q;
         return result;
      }
      double area(double p,double q,double r)
      {
         p=a;
         q=b;
         r=c;
         double s=(a+b+c)/2;
         double result=sqrt(s*(s-p)*(s-q)*(s-r));
         return result;
      }

};

void Triangle:: check()
{

        if(c==sqrt((a*a)+(b*b)))
        {
           cout << "It is Right Triangle" << endl;
           cout << "area is =" << area(a,b);
        }
        else{
          cout << "It is not Right triangle" << endl;
          cout << "area is =" << area(a,b,c);
        }

}

int main()
{
  double arr[3];
  cout << "x , y ,z" << endl;
  for(int i=0;i<3;i++)
  {
    cin >> arr[i];
  }
  sort(arr,arr+3);
  double x=arr[0];
  double y=arr[1];
  double z=arr[2];



  Triangle obj(x,y,z);
  obj.check();
  return 0;

}
