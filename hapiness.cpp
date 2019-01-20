#include<iostream>
using namespace std;

int main()
{
  int l;
  cin >> l;
  for(int p=0;p<l;p++)
  {
    int t=0;
    int n,trr[100002];
    cin >> n;
    for(int i=1;i<=n;i++)
    {
     cin >> trr[i];
    }
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {

          if(trr[trr[i]]==trr[trr[j]] && trr[i]!=trr[j] && i!=j)
          {
            t=t+1;
            break;
          }


      }
    }
   if(t>0)
   {
      cout << "Truly Happy" << endl;
   }
   else{
     cout << "Poor Chef" << endl;
   }
  }
  return 0;
}
