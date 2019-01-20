#include<iostream>
using namespace std;

void fun()
    {
    float t;
    cout << "enter float number"<< endl;\
    cin >> t;
      try{
         throw t;
      }
      catch(float i)
      {
        cout << "caught of float = " << i << endl;
        throw;
      }

    }

int main()
    {
     try{
          fun();
     }
     catch(float f)
     {
        cout << "2nd time caught of float = " << f << endl;
     }
     cout << "END" << endl;
    return 0;
    }
