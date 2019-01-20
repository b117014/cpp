#include<iostream>
using namespace std;


namespace emp{

class detail{
   protected:  int  emp_id;
               int emp_salary;

   public: detail(int a,int b):emp_id(a),emp_salary(b){

   }

      void show()
      {
        cout << "Employ id is : " << emp_id << endl;
        cout << "Employ salary is : " << emp_salary << endl;
      }
};

}

int main()
{
  using namespace emp;
  int p;
  int  q;
  cout << "Enter id and salary : " << endl;
  cin >> p >> q;
  detail ob(p,q);
  ob.show();
  return 0;
}
