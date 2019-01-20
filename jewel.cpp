#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  int a;
  cin >> a;
  for(int k=0;k<a;k++)
  {
  int ct=0;
    string s1,s2;
    cin >> s1 >> s2;
    for(int i=0;i<s1.length();i++)
      {
         int j=0;
         while(j<s2.length()){
            if(s1[i]==s2[j])
              {
                ct=ct+1;
                s2.erase(s2.begin()+j);


              }
              else{
                j++;
              }

          }
      }

      cout << ct << endl;

  }
  return 0;

}
