#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 int t;
 cin >> t;
 for(int l=0;l<t;l++)
 {
  long long int n,k;
   cin >> n >> k;
   int i=0;
   while(1)
     {
        i++;
          n=n-pow(k,i);

         if(n<pow(k,i) && n>0)
         {
           cout << "Alice" << endl;
           break;
         }else if(n<0)
         {
           cout << "Bob"<< endl;
           break;
         }
         n=n-pow(k,i);
         if(n<pow(k,i) && n>0){
          cout << "Bob" << endl;
          break;
         }else if(n<0){
            cout << "Alice" << endl;
            break;
         }


     }

 }
return 0;
}
