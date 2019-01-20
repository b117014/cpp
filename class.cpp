#include<iostream>
using namespace std;

class base{

        int x=10;
        protected: int y;
        public:
            void display(){
               cout << "x=" << x <<endl;
               cout << "y=" << y;

            }
};

class derived: public base{
       public:
        void display(){
              y=20;

              cout << "x=" << x << endl;
              cout << "y=" << y << endl;
        }
};

int main(){
  derived d;
  d.display();
  return 0;

}
