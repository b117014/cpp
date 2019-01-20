#include<iostream>
using namespace std;

class person{
    int *age;
    public:
      person(int a){
                 age=new int ;
                 *age=a;
                }
      person(person const &copy){
                    age=copy.age;}
      ~person(){delete age;}
      void show(){cout << "Age is = " << *age << endl;}
  };

int main()
   {

     person p1(10);
    p1.show();
      {
         person p2=p1;
          p2.show();
       }
   p1.show();
   return 0;

}


