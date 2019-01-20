#include<iostream>
using namespace std;

int main()
{
   double *ptr;
   int n;
   cout << "enter you array size" << endl;
   cin >> n;
    ptr  =  new double [n];


    delete ptr;
return 0;
}
