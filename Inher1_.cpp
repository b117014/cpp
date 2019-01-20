#include<iostream>
using namespace std;

class base{
 public: static int x;
 public :
void display(){
    cout << "x= " << x << endl;
}
void display2(){
     x=x+2;
     cout << "after x =" << x << endl;
}

};

int base:: x=10;
int main(){
    base ob1;

    ob1.display();
    base ob2;
    ob1.x=20;
    ob2.display();
    return 0;

}
