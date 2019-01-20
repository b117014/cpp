#include<iostream>
#include<cstring>
using namespace std;

int main()
{
int a;
cin >> a;
for(int k=0;k<a;k++)
{

    string s[101];
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
       cin >> s[i];
    }
    double time[101];
    for(int i=0;i<n;i++)
    {
      time[i]=0.2;
     for(int j=1;j<s[i].length();j++)
     {
     if(s[i][j]=='d' || s[i][j]=='f')
     {
        if(s[i][j-1]=='d' || s[i][j-1]=='f')
        {
           time[i]=time[i]+0.4;

        }
        else{
         time[i]=time[i]+0.2;
        }
     }
     else if(s[i][j]=='j' || s[i][j]=='k')
     {
        if(s[i][j-1]=='j' || s[i][j-1]=='k')
        {
          time[i]=time[i]+0.4;
        }
         else{
         time[i]=time[i]+0.2;
        }
     }

     }
    }

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
         if(s[i]==s[j] && i<j)
         {
          time[j]=time[j]/2;
         }
      }
    }
    int l=0;
    for(int i=0;i<n;i++)
    {

       l=l+(time[i])*10;

    }

    cout << l << endl;



}
return 0;
}
