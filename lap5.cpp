#include<iostream>
using namespace std;

      void result(int x=10,int y=20.5);
      void result(int x=30);




  void result(int x=10,int y=10)
  {
        int z=  x+y;
        cout << "result is=" << z << endl;
  }

  void result(int x=30)
  {
     int z=x*x;
     cout << "result is =" << z << endl;


  }

  int main()
  {

       int x,y;

       cin >> x >> y;
       result(x,y);
       result(x);
       return 0;
  }

 int main()
 {

 }
