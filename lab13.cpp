#include<iostream>
using namespace std;

class figure{
  protected :double a;
  public:
    figure(double x):a(x){};
    virtual void show_area()=0;

};

class square:public figure{

 public :
    square(double y):figure(y){};
    void show_area(){
          double res=a*a;
          cout << "area of square is : " << res << endl;
    }

};

class circle:public figure{
public:
      circle(double k):figure(k){};
      void show_area(){
        double res=(3.14)*a*a;
        cout << "area of circle is : "<< res << endl;
      }

};

int main(){

    figure *p;
    square s(2.3);
    circle c(3.5);
    p=&c;
    p->show_area();

    p=&s;
    p->show_area();

    return 0;



}
