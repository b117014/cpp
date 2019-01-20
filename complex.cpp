#include<iostream>
using namespace std;

class complex1{
  private : double x,y;

  public:
  complex1(){};
     complex1(double a,double b):x(a),y(b){}
     complex1 operator-(complex1 &a)
     {
          complex1 temp;
          temp.x=this->x-a.x;
          temp.y=this->y-a.y;
          return temp;
     }
     void display()
       {
          cout << x << " + i" << y << endl;
       }

};

int main()
{
       double x1,x2,y1,y2;
       cout << "enter first complex no. x and y" <<endl;
       cin >> x1 >> y1;
       cout << "enter second complex no. x and y"<< endl;
       cin >> x2 >> y2;
       complex1 c1(x1,y1),c2(x2,y2),c3;
          c3 =c1-c2;
          cout << "after subtraction of two complex"<< endl;
          c3.display();
          return 0;

}
