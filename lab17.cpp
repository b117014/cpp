#include<iostream>
using namespace std;

class person{

   protected: double a,b;
   public:
   person(){}
       person(double x,double y):a(x),b(y){}
        person operator+(person &ob1);
        person operator*(person &ob2);
       person operator-(person &ob3);
        person operator/(person &ob4);
   void show()
   {
     cout << "a = " << a << endl;
     cout << "b= "<< b << endl;
   }

};

person person:: operator+(person &ob1)
{
      person temp;
        temp.a = a + ob1.a;
        temp.b= b+ ob1.b;
        return temp;

}
person person:: operator-(person &ob2)
{
    person temp;
       temp.a = a- ob2.a;
       temp.b=b-ob2.b;
       return temp;

}
person person:: operator*(person &ob3)
{
    person temp;
       temp.a = a*(ob3.a);
       temp.b=b*(ob3.b);
       return temp;

}
person person:: operator/(person &ob4)
{
    person temp;
       temp.a = a/ ob4.a;
       temp.b=b/ob4.b;
       return temp;

}

int main()
{
  person ob1(10,20),ob2(2,7);
  person ob3,ob4,ob5,ob6;
  ob3 = ob1+ob2;
  ob3.show();
  ob4=ob1-ob2;
  ob4.show();
  ob5=ob1*ob2;
  ob5.show();
  ob6=ob1/ob2;
  ob6.show();

  return 0;

}
