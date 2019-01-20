#include<iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  for(int k=0;k<a;k++)
  {
      int n;
      cin >> n;
      int ct=0;
      int arr[5]={2010,2015,2016,2017,2019};
      for(int i=0;i<5;i++)
      {
         if(n==arr[i])
         {
           ct=ct+1;
         }
      }
      if(ct!=0)
      {
       cout << "HOSTED" << endl;
      }
      else{
       cout << "NOT HOSTED" << endl;
      }
  }
  return 0;
}
