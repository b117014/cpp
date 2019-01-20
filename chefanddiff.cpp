#include<iostream>
using namespace std;
int main()
{
 int t;
 cin >> t;
 for(int k=0;k<t;k++)
 {
     int a,b,ct=0;
     cin >> a >> b;
     for(int i=10;i>=0;i--)
     {
     a=a+i-1;
         b=b+i;

        if(a!=b)
        {
        if(a-b!=1 || b-a!=1)
        {
         a=a+i;
        b=b+(i-1);

        }
         if(b-a==1)
         {
         cout << b-a;
         a=a+i;
         b=b+i-1;

         }
         else if(a-b==1)
         {
           a=a+i-1;
           b=b+i;

         }
        }
         if(a==b)
        {
          ct=1;
          break;
        }
     }
     if(ct==1)
     {
      cout << "YES" << endl;
     }else{
       cout << "NO" << endl;
     }

 }

return 0;

}
