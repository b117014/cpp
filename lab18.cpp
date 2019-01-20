#include<iostream>
using namespace std;

class Test{
    protected: double a;
    public:
       Test(double x):a(x)
       {}

      void operator==(Test &ob)
         {
              if(a==ob.a){
               cout << "attributes are equal"<<endl;
              }else{
                cout << "attributes are not equal"<< endl;
              }
         }

};

int main()
{
   Test t1(5),t2(5);
    t1==t2;
    return 0;

}
