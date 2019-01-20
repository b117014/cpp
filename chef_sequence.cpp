#include<iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  for(int m=0;m<a;m++)
  {
    int arr[10000],n,k;
     cin >> n >> k;
     for(int i=0;i<n;i++)
     {
      cin >> arr[i];
     }
     int trr=0,krr=0,ct=0;
     int t=arr[k-1];

     for(int j=1;j<=10;j++)
     {

        arr[k-1]=j;
         for(int i=0;i<n;i++)
           {
             trr=trr+arr[i]*arr[i];
             krr=krr+arr[i];
             }
         if(trr<=krr && arr[k-1]!=t)
           {
            ct=ct+1;

            }

     }
     if(ct!=0)
     {
       cout << "YES" << endl;
     }
     else{
      cout << "NO" << endl;
     }



  }
  return 0;

}
