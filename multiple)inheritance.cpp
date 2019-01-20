#include<iostream>
using namespace std;

class base1{
    public : int x;

};

class base2{
public: int y;
};

class derived: public base1,public base2{
  public: void display(){
    x=20;
    y=20;
    cout << x << endl;
    cout << y <<endl;
    }
};

int main(){
   derived d;
   d.display();
   return 0;
}
