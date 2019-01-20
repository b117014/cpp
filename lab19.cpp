#include<iostream>
using namespace std;

class Add {
   protected: double a;
   public:
     Add(double x):a(x){}
     friend double operator+(double y ,Add &ob);


};

double operator+(double y,Add &ob)
{
  double k= y+ ob.a;
  return k;

}

int main(){
    Add t(5);
     double m=29;
      double k = m+t;
      cout << k << endl;
      return 0;


}
