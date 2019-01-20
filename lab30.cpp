#include<iostream>
using namespace std;

template <class T>
 void swape(T &a,T &b)
 {
    T x;
    x=a;
    a=b;
    b=x;

 }

 int main()
 {
   double x,y;
   cout << "Enter any two number : " << endl;
   cin >> x >> y;
   swape(x,y);
   cout << "After the swap "<< endl;
   cout << x << " " << y << endl;
   return 0;
 }
