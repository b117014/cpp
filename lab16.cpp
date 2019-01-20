#include<iostream>
using namespace std;

class base{

public:
   virtual void display(){
         cout << "base function call" << endl;
   };
};

class derived1 :public base{
    public:
    void display(){
          cout << "derived 1  function call" << endl;
    };
};

class derived2 : public base{
  public:
     void display(){
         cout << "derived 2 function call"<< endl;
     };

};

int main()
{
 base *p,ob;
 derived1 d1;
 derived2 d2;
  p=&d1;
  p->display();
  p=&d2;
  p->display();
  ob.display();
  return 1;

}
