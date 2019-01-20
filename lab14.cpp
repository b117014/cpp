#include<iostream>
using namespace std;

class container{
  protected :double a;
  public:
    container(double x):a(x){};
    virtual void volume()=0;

};

class cube:public container{

 public :
    cube(double y):container(y){};
    void volume(){
          double res=a*a*a;
          cout << "volume of square is : " << res << endl;
    }

};

class sphere:public container{
public:
      sphere(double k):container(k){};
      void volume(){
        double res=(4/3)*(3.14)*a*a*a;
        cout << "volume of circle is : "<< res << endl;
      }

};

int main(){

    container *p;
    sphere s(2.3);
    cube c(3);
    p=&c;
    p->volume();

    p=&s;
    p->volume();

    return 0;



}

