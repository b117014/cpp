#include<iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  for(int k=0;k<a;k++)
  {   int G;
      cin >> G;
      for(int i=0;i<G;i++)
      {
        int I,N,Q;
        cin >> I >> N >> Q;
         if(N%2==0)
         {
             cout << N/2 << endl;


         }

         else{
              if(I==1)
              {
                if(Q==1)
                {
                  cout << N/2 << endl;
                }else {

                  cout << N/2+1 << endl;
                }
              }
              if(I==2)
              {

              if(Q==1)
              {
                 cout << N/2+1 << endl;

              }
              else{
               cout << N/2 << endl;
              }
              }

         }


             }

      }
return 0;
  }



