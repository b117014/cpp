#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int a;
 cin >> a;
 for(int l=0;l<a;l++)
 {
   int n,k,sum=0;
   cin >> n >> k;
   int arr[100];
   for(int i=0;i<n;i++)
   {
    cin >> arr[i];
   }
   int t;
   sort(arr,arr+n);
   for(int i=0;i<n;i++)
   {
      if(k==arr[i])
      {
        t=i;
      }
   }
   for(int i=t+1;i<n-1;i++)
   {
      arr[i]=k;
   }

   for(int i=0;i<n;i++)
   {
     sum=sum+arr[i];
   }

   cout << sum << endl;
 }

return 0;
}
