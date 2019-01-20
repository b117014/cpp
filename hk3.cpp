#include<iostream>
#include<cstring>
using namespace std;

struct NewType{

    int age;
    string fname;
    string lname;
    int st;
};

int main()
{
  NewType nw;
  cin >> nw.age >> nw.fname >> nw.lname >> nw.st;
  cout << nw.age << " " << nw.fname << " " << nw.lname << " " << nw.st << endl;
  return 0;


}
