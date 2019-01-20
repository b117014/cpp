#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int j;
  long int x,s,p;
  long int n;
  int tec[100001];
  cin >> p;
  for(int k=0;k<p;k++){
  cin >> n >> x >> s;
int a,b;
  tec[x]=1;
  for(int i=0;i<s;i++)
  {
      cin >> a  >> b;
        if(tec[a]==1||tec[b]==1)
        {
      swap(tec[a],tec[b]);

      }
  }


  for( j=0;j<=n;j++)
  {
     if(tec[j]==1)
     {
      cout << j<<endl;
      tec[j]=0;
     }
  }


  }

  return 0;
}
