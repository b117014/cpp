#include<iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  for(int l=0;l<a;l++)
  {
    int arr[10000],n,k;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
     cin >> arr[i];
    }
    int ct=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]!=1)
       {
        ct=ct+1;
       }
    }

    if(ct<=k)
    {
       cout << "YES" << endl;
    }
    else{
     cout << "NO" << endl;
    }

  }
  return 0;
}
