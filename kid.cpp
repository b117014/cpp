#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int a;
 cin >> a;
 for(int l=0;l<a;l++)
 {
   int n,k;
   cin >> n >> k;
   int a[100001];
   for(int i=0;i<n;i++)
   {
     cin >> a[i];
   }
   sort(a,a+n);
   int kid=0,man=0;
   for(int i=0;i<k;i++)
   {
     kid=kid+a[i];
   }
   for(int i=k;i<n;i++)
   {
     man=man+a[i];
   }

   cout << man-kid << endl;
 }
return 0;
}
