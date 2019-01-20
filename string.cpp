#include<iostream>
#include<cstring>
using namespace std;

int length(string &s)
{
int i=0;
while(s[i]!=0)
{
   s[i++];
}
   return i;
}

string &odd(string &s)
{
int x1=length(s);
    string temp;
    int j=0;
     for(int i=x1/2;i<x1-1;i++)
     {
        temp[j]=s[i+1];
        j++;
     }
   j=0;
     for(int i=x1/2;i<x1-1;i++)
     {
       s[i]=temp[j];

       j++;
     }
     s[x1-1]=NULL;
     return s;
}
int main()
{
     int t;
     cin >> t;
     for(int i=0;i<t;i++)
         {
              string s,s1,s2;
           cin >> s;
           int x;
           x = sizeof(s)/sizeof(char);
           if(x%2==0)
           {
           for(int i=0;i<x/2;i++)
             {
                 s1[i]=s[i];


             }
             for(int i=0;i<x/2;i++)
             {
               s2[i]=s[i+x/2];
             }
             int ct=0;
            for(int i=0;i<length(s1);i++)
            {
              if(s1[i]==s2[i])
              {
                 ct++;
              }
            }
            cout << ct<< endl;
            cout << s1[0];
            if(ct==length(s1)-1)
            {
               cout << "YES" << endl;
            }else{
              cout << "NO";
            }
           }
       else{
              s=odd(s);
              cout << s;
             for(int i=0;i<x/2;i++)
             {
                 s1[i]=s[i];


             }
             for(int i=0;i<x/2;i++)
             {
               s2[i]=s[i+x/2];
             }

             if(s1==s2)
             {
               cout << "YES";
             }else{
               cout << "NO";
             }


       }



         }
         return 0;

}
