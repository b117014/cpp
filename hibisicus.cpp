#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n,k;
   int v1,v2;
   cout << "enter test case"<< endl;
   cin >> k;
   double t1,t2;
   for(int i=0;i<k;i++)
   {
   cin >> n >> v1 >> v2;
    t1= ((sqrt(2))*n)/v1;
      t2 = (2*(sqrt(1))*n)/v2;

   if(t1>t2)
   {

   cout << "Elevator" << endl;
   }
   else if(t1<t2){
    cout << "Stairs" << endl;
   }
   }
   return 0;
}
