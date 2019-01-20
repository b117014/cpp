#include<iostream>
using namespace std;

class A{
  protected: int x;
              char y;
    public:
      A(int a,char b):x(a),y(b){}
      void  show() const
      {

        cout << "x = "<< x << endl;
        cout << "y = " << y << endl;
      }

};

int main()
{

     A const ob(7,'a');
     ob.show();
     return 0;
}
