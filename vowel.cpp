#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  int a;
  cin >> a;
  for(int k=0;k<a;k++)
  {
       int n,ct=0;
       string s;
       char v[6] ="AEIOU";

       cin >> n;
       cin >> s;


      for(int i=0;i<n;i++)
      {

          if(s[i]==v[0] || s[i]==v[1] || s[i]==v[2] || s[i]==v[3] || s[i]==v[4] )
          {

             ct++;

          }

      }

      if(ct>=2)
      {
        cout << "Yes" << endl;
      }
      else{
        cout << "No" << endl;
      }

  }
  return 0;

}
