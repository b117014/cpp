#include<iostream>
using namespace std;

 class base{
    public :
      virtual void show(){
        cout << "base function" << endl;
      }

 };

 class derived :public base{
   public:
       void show(){
       cout << "derived function" << endl;
       }

 };

 int main()
 {
    base ob;
    derived d;

    base &b=d;
    b.show();
    ob.show();


    return 0;

 }
