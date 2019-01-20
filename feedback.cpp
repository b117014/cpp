#include<iostream>
#include<cstring>
using namespace std;

int main()
{
   int t;
   cin >> t;
   for(int k=0;k<t;k++)
   {
     char s[1000000];
     int ct=0;

     cin >> s;
     int l=strlen(s);
     for(int i=0;i<l-2;i++)
     {

           if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' || s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
           {
             ct=1;
             break;
           }

     }

     if(ct==1)
     {
        cout << "Good" << endl;
     }else{
        cout << "Bad" << endl;
     }
   }
   return 0;
}
