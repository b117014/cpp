#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;

int main()
{
   string s;

  cin >> s;
   for(int i=0;i<s.length();i++)
   {

      if(s[i]==',')
      {
        cout<<endl;
      }
     else{
      cout << s[i];
     }
   }
return 0;

}
