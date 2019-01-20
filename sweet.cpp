#include<iostream>
using namespace std;

int main()
{

  int a;
  cin >> a;
  for(int k=0;k<a;k++)
  {
     int N,X,arr[100],total=0;
       cin >> N >> X;
       for(int i=0;i<N;i++)
       {
          cin >> arr[i];
          total=total+arr[i];

       }
       if(total%X == 0)
       {
       int m=total/X;
        cout << m << endl;
       }
       else if(total%X != 0)
       {
          bool b=true;
            int t= total%X;

              for(int i=0;i<N;i++)
              {
                  if(t>=arr[i])
                    {
                      cout << "-1" << endl;
                      b =false;
                      break;
                    }

              }
              if(b==true)
              {
                 int l=total/X;
                 cout << l << endl;
              }


       }



  }
  return 0;
}
