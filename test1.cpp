#include<iostream>
#include<cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
int t;
  cin >> t;
  for(int k=1;k<=t;k++)
  {
    int n;
    cin >> n;
     string ch;
    cin >> ch;

  if(n%2!=0)
  {
     n=n-1;
  }
  for(int i=0;i<n;i=i+2)
  {
    swap(ch[i],ch[i+1]);

  }

    for(int i=0;i<=n;i++)
    {
       if(ch[i]=='a')
       {
           ch[i]='z';
       }
       else if(ch[i]=='b')
       {
           ch[i]='y';
       }
       else if(ch[i]=='c')
       {
           ch[i]='x';
       }
       else if(ch[i]=='d')
       {
           ch[i]='w';
       }
       else if(ch[i]=='e')
       {
           ch[i]='v';
       }
       else if(ch[i]=='f')
       {
           ch[i]='u';
       }
       else if(ch[i]=='g')
       {
           ch[i]='t';
       }
       else if(ch[i]=='h')
       {
           ch[i]='s';
       }
       else if(ch[i]=='i')
       {
           ch[i]='r';
       }
    else if(ch[i]=='j')
       {
           ch[i]='q';
       }
       else if(ch[i]=='k')
       {
           ch[i]='p';
       }
       else if(ch[i]=='l')
       {
           ch[i]='o';
       }
       else if(ch[i]=='m')
       {
           ch[i]='n';
       }




       else if(ch[i]=='z')
       {
           ch[i]='a';
       }
       else if(ch[i]=='y')
       {
           ch[i]='b';
       }
       else if(ch[i]=='x')
       {
           ch[i]='c';
       }
       else if(ch[i]=='w')
       {
           ch[i]='d';
       }
       else if(ch[i]=='v')
       {
           ch[i]='e';
       }
       else if(ch[i]=='u')
       {
           ch[i]='f';
       }
       else if(ch[i]=='t')
       {
           ch[i]='g';
       }
       else if(ch[i]=='s')
       {
           ch[i]='h';
       }
       else if(ch[i]=='r')
       {
           ch[i]='i';
       }
    else if(ch[i]=='q')
       {
           ch[i]='j';
       }
       else if(ch[i]=='p')
       {
           ch[i]='k';
       }
       else if(ch[i]=='o')
       {
           ch[i]='l';
       }
       else if(ch[i]=='n')
       {
           ch[i]='m';
       }
    }


    cout << ch;

}

     return 0;
}


