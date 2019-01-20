#include<iostream>
#include<string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  for(int m=0;m<t;m++)
      {
          int G;
          cin >> G;
          for(int i=0;i<G;i++)
             {
                 int I,Q;
                 long long int N;
                  string arr;
                 cin >> I >> N >> Q;
                 for(int j=0;j<N;j++)
                    {
                       if(I==1)
                       {
                        arr[j]=1;
                       }else{
                        arr[j]=2;
                       }

                    }
                for(int j=0;j<N;j++)
                {
                   for(int k=0;k<=j;k++)
                   {
                       if(arr[k]==1)
                       {
                          arr[k]=2;
                       }else{
                          arr[k]=1;
                       }
                   }

                }
                int ct=0;
                for(int j=0;j<N;j++){
                     if(arr[j]==Q)
                         {
                           ct++;
                         }

                }
                cout << ct << endl;

             }

      }
      return 0;

}
