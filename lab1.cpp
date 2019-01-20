#include<iostream>
using namespace std;

class convert{
  private : double seconds;

  public :
       convert(double x):seconds(x){}
       void show(){
           double minute = seconds/60;
            double hour  = seconds/(60*60);

            cout << hour << ":" << minute << ":" << seconds <<endl;
       }

};

int main()
{
   int y;
   cout << "enter time in second" << endl;
   cin >> y;
   convert ob(y);
   ob.show();
   return 0;
}
