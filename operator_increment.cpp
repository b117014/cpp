#include<iostream>
using namespace std;

class Point{
   int x;
    public:
    Point(int a):x(a){};
        Point operator++(int z)
            {
             x++;
             return *this;
            }
            void show()
               {
                 cout << x << endl;
               }
};

int main()
{

  Point p=5;
  p++;
  p.show();
  return 0;
}
