#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main()
{
  int t;
  cin >> t;
  for(int i=0;i<t;i++)
  {
     int a;
     cin >> a;
     int* arr =(int*)malloc(sizeof(int)*a);
     for(int j=0;j<a;j++)
     {
        cin >> arr[j];
     }

     sort(arr,arr+a);
      int ar = arr[1]-arr[0];
      for(int j=2;j<a;j++)
      {
        int m=arr[j]-arr[j-1];
         if(ar>m)
         {
           ar=m;
         }

      }
     cout << ar << endl;

  }
  return 0;

}
