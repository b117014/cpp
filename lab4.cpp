#include<iostream>
#include<cstring>
using namespace std;

class Employee{
 private : string emp_id;
           double emp_salary;
 public :
 Employee(string x,double y):emp_id(x),emp_salary(y){}

  void display(){
  cout << "employee id is : " << emp_id <<endl;
  cout << "employee salary is : " << emp_salary <<endl;
  }

};

int main()
{
  string x;
  double y;
  cout << "enter employee id : " << endl;
  cin >> x;
  cout <<"enter employee salary : " <<endl;
  cin >> y;
  Employee obj(x,y);
  obj.display();
  return 0;
}
