#include<iostream>
using namespace std;

int main()
{

 int a;
 cin >> a;
 for(int k=0;k<a;k++)
 {
   int p1,p2,l;
   cin >> p1 >> p2 >> l;

   int t=(p1+p2)/l;
   if(t%2==0)
   {
   cout << "CHEF" << endl;
   }else{
    cout << "COOK"<< endl;
   }


 }
 return 0;
}
