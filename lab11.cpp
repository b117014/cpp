#include<iostream>
using namespace std;

class staff{

protected: int id,phone;
   staff(int p,int q):id(p),phone(q){};

};

class officer:public staff{
  protected :char Grade;
public:
officer(char d,int a,int b):Grade(d),staff(a,b){};
};
class Teacher:public staff{
      protected:int year_of_exp;
      public:
      Teacher(int t,int a,int b):year_of_exp(t),staff(a,b){};

};

class Regular:public Teacher{
       protected: int Basic_pay;
                  double DA,HRA,Gross;
        public:
        Regular(int a,int b,int c,int d):Basic_pay(a),Teacher(b,c,d){};
        void display(){
            DA=(1.5)*Basic_pay;
            HRA=(0.2)*Basic_pay;
            Gross=Basic_pay + DA +HRA;

            cout << "Gross is : " << Gross << endl;

        }

};

class contract:public Teacher{

 protected: int pay_cons,cont_dur_mon;
    public:
    contract(int a,int b,int c,int d,int e):pay_cons(a),cont_dur_mon(b),Teacher(c,d,e){};
    void display(){
            cout << "pay consol is: " << pay_cons << endl;
            cout << "cont duration month: " << cont_dur_mon << endl;
            cout << "year of expreance:" << year_of_exp << endl;
            cout << "id is :" << id << endl;
            cout << "phone is : "<< phone <<endl;
    }
};

int main()
{
int ch;

  cout << "enter 1 for Regular Teacher"<< endl;
  cout << "enter 2 for contrait Teacher "<< endl;
  cout << "enter 3 for officer "<< endl;

  cin >> ch;

  switch(ch)
  {

  case 1 :  int a,b,c,d;
             cout << "Enter basic pay : ";
             cin >> a;
             cout << "enter year of expreance" ;
             cin >> b;
             cout << "enter id :";
             cin >> c;
             cout << "enter phone :" ;
             cin >> d;
             Regular ob(a,b,c,d);
             ob.display();
             break;

  case 2:
           int a,b,c,d,e;
           cout << "enter contract duration month";
           cin >> a;
           cout << "enter pay consolidate ";
           cin >> b;
           cout << "enter year of expreance" ;
             cin >> c;
             cout << "enter id :";
             cin >> d;
             cout << "enter phone :" ;
             cin >> e;
             contract ob1(a,b,c,d,e);
             ob1.display();
             break;
  case 3:
          char a;
          int b,c;
          cout << "enter Grade :";
          cin >> a;
          cout << "enter id :";
          cin >> b;
          cout << "enter phone :";
          cin >> c;
          officer ob2(a,b,c);
    break;

  }
return 0;
}
