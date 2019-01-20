#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int n;
    cin >> n;
      int t=n/2;
      int p;
      int k=0;
      bool stop=false;
    while(k<t && stop==false)
    {
       for(int i=0;i<t;i++)
       {
         for(int j=0;j<t;j++)
         {

             if(pow(2,i)+pow(2,j)==n-k || pow(2,i)+pow(2,j)==n+k)
            {

               for(int l=0;l<t;l++)
               {
               for(int m=0;m<t;m++)
               {
                  if(pow(2,l)+pow(2,m)==n+k && )
                  { stop=true;
              p=k;
                  }
               }
               }

            }


         }
       }
       k++;

    }
  cout << p;
  return 0;

}
