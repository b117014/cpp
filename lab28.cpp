#include<iostream>
using namespace std;

class base
{};

class derived: public base
{};

int main()
{
    derived d;
    try{
         throw d;
      }

      catch(base tempb){
         cout << "caught a base" << endl;
      }
        catch(derived tempd)
      {
        cout << "caught a derived" << endl;
      }

      derived d1;
       try{
          throw d1;
       }
       catch(derived tempd1)
       {
        cout << "caught a 2nd derived" << endl;
       }
       catch(base tempb1)
        {
         cout << "caught 2nd base" << endl;
        }
      cout << "End" << endl;
      return 0;
}

