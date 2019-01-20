#include<iostream>
using namespace std;

class Point{

   int x,y;
   public:
        Point(){}
        Point(int a,int b):x(a),y(b){};
        friend Point operator+(Point lhs,Point rhs);
        void show(){
           cout << x << endl << y << endl;
        }

};

int operator+(int z,Point rhs)
        {

                x=z+rhs.x;

                return t;
        }

int main()
{
   Point p1(3,5),p2(4,8);
   Point p3;
   p3=p1+p2;
   p3.show();
   return 0;
}
