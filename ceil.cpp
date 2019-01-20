#include<iostream>

using namespace std;
int main()
{

int t;
  cin >>t;
  for(int i=0;i<t;i++)
    {
       int a,b;
       cin >> a >> b;

       int k=(a-b)%10;
       if(k<=9 && k>=1)
       {
           if(a-b-1 == 0)
           {

              cout << "3";
              return 0;
           }
             cout << a-b-1;

       }else{

        cout << (a-b)+1;
       }


       cout << endl;
    }

    return 0;
    getch();
}
