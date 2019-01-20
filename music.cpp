#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

  int t;
  cin >> t;
  for(int i=0;i<t;i++)
  {
     int n;
     long long arr[100];
     cin >> n;
     for(int j=0;j<n;j++)
     {
      cin >> arr[j];

     }
     int k;
     cin >> k;
      int p=arr[k-1];
     sort(arr,arr+n);

     for(int j=0;j<n;j++)
     {
        if(arr[j]==p)
        {
          cout << j+1 << endl;

        }

     }

  }
  return 0;
}
