#include<iostream>
using namespace std;

class base1
{
   protected:int x;
   public:
      base1(int a):x(a){};


};

class base2{
  protected: int a,b,c;
  public:
     base2(int p,int q,int r):a(p),b(q),c(r){};

};

class derived:public base1,public base2{

    public:
    derived(int f,int g,int h,int i):base1(f),base2(g,h,i){};

    void show(){
    cout << "base1 constructor and data is: " << x << endl;
      cout << "base2 constructor and data is: " << a << " "<< b<< " "  << c << endl;
      }
};

int main()
{

  derived ob(2,3,4,5);
  ob.show();
  return 0;



}
