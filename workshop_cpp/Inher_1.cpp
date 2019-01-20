#include<iostream>
using namespace std;

class base{

     public: static int x;
       void display(){
            cout << "x= " << x << endl;
       };

}

base :: static int x=10;

int main(){
    base ob1;
    base ob2;
    ob1.display();
    return 0;

 }
