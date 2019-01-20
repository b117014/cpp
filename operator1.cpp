#include<iostream>
using namespace std;

class Point
{
   int x,y;
   public:
      Point(){};
      Point(int a,int b):x(a),y(b){};
      Point operator+(Point rhs)
          {
            Point temp;
            temp.x = x+ rhs.x;
            temp.y=y+rhs.y;
            return *this;
          }
        void show()
        {
            cout << x << endl << y << endl;
        }


};

int main()
{
   Point ob1(4,6),ob2(6,7);
        Point ob3;
        ob3 = ob1+ob2;
        ob3.show();
        return 0;
}
