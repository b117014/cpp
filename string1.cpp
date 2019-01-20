#include<iostream>
#include<cstring>
using namespace std;

int main()
  {
     int m;
     cin >> m;
     for(int l=0;l<m;l++)
       {
    char s[1000],s1[1000],s2[1000];
      cin >> s;
      int x = strlen(s);
      if(x%2 == 0)
      {
             for(int i=0;i<x/2;i++)
             {
                 s1[i]=s[i];
             }
             for(int i=0;i<x/2;i++)
             {
                s2[i]=s[i+x/2];
             }
             for(int i=x/2;i<x;i++)
             {
                 s1[i]=NULL;
                 s2[i]=NULL;
             }
 int ct=0,ct1=0;

              for(int i=0;i<strlen(s1);i++)
                {
                  for(int j=0;j<strlen(s1);j++)
                  {
                     if(s1[j]==s2[i])
                     {
                     ct++;
                     }

                  }
                  if(s1[i]==s2[i])
                  {
                     ct1++;
                  }
                }


            if(ct==strlen(s1) || ct1==strlen(s1) )
            {
             cout << "YES"<< endl;
            }else{
            cout << "NO" << endl;
            }

      }
      else{
          int t=0;
          char temp[1000];
         for(int i=x/2+1;i<x;i++)
         {
           temp[t]=s[i];
           t++;
         }
         t=0;
         for(int i=x/2;i<x-1;i++)
         {
             s[i]=temp[t];
             t++;

         }
         s[x-1]=NULL;
         int x1= strlen(s);

          for(int i=0;i<x1/2;i++)
             {
                 s1[i]=s[i];
             }
             for(int i=0;i<x1/2;i++)
             {
                s2[i]=s[i+x1/2];
             }
             for(int i=x1/2;i<x1;i++)
             {
                 s1[i]=NULL;
                 s2[i]=NULL;
             }
        int ct=0,ct1=0;

              for(int i=0;i<strlen(s1);i++)
                {
                  for(int j=0;j<strlen(s1);j++)
                  {
                     if(s1[j]==s2[i])
                     {
                     ct++;
                     }
                  }
                  if(s1[i]==s2[i])
                  {
                     ct1++;
                  }
                }

            if(ct==strlen(s1) || ct1==strlen(s1))
            {
             cout << "YES"<< endl;
            }else{
            cout << "NO" << endl;
            }



      }
      }
      return 0;

  }
