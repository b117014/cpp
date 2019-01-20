#include<iostream>
using namespace std;

template <class T>
 double add(T a,T b)
 {
  return (a+b);

 }
template <class T1>
 double add(T1 a)
 {
    return(a+10);
 }

 int main()
 {
     double x=10,y=5;
      cout << "Add two number : " << add(x,y) << endl;
      cout << "Add a number with 10 : " << add(x) << endl;
      return 0;

 }
