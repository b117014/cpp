#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int a;
 cin >> a;
 for(int r=0;r<a;r++)
    {
      int n,k;
       cin >> n >> k;
       int arr[100];
       for(int i=0;i<n;i++)
       {
          cin >> arr[i];
       }

       sort(arr,arr+n,greater<int>());



           int ct=0;
         for(int i=k-1;i>=0;i--)
           {
             if(arr[i]==arr[i-1])
             {
               ct++;
             }
             ct++;
           }
           cout << ct << endl;

    }
  return 0;
}
