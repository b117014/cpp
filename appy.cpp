#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int n;
  int m;
  cin >> n >> m;
  int a[100000],b[100000];
  for(int i=0;i<n;i++)
  {
     cin >> a[i];
  }
  for(int j=0;j<n;j++)
  {
    cin >> b[j];
  }
  int x[100000];

  for(int i=n-1;i>=0;i--)
  {

    if(a[i]-m>0)
    {
      x[i]=a[i]-m;
    }
    else{
      x[i]=0;
    }

  }

  int c[100000];
  for(int i=0;i<n;i++)
  {
    c[i]=max(0,a[i]-x[i])*b[i];

  }
   sort(c,c+n);
   cout << c[n-1];

    return 0;

}
