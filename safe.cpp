#include<iostream>
using namespace std;

int main(){
   int m;
   cin >> m;
   for(int i=0;i<m;i++)
   {
      string s;
      cin >> s;
      while(s[j]!=NULL)
      {
        j++;
        if(s[j]==0 || s[j]==1 || s[j]==2 || s[j]==3 || s[j]==4 || s[j]==5 || s[j]==6 || s[j]==7 || s[j]==8 || s[j]==9)
        {
          ct=ct+1;
        }
      }
      if(ct<=1)
      {
        cout << "safe" << endl;
      }

      else{


      }
   }

}
