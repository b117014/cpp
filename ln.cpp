#include <iostream>
using namespace std;

int isPrimeNumber(int);

int main()
{

int a;
cin >> a;
for(int t=0;t<a;t++){
  int m;
  cin >> m;
   int k=0,arr[10000],trr[10000];

   bool isPrime;
   for(int n = 3; n < 1003; n++) {
      // isPrime will be true for prime numbers
      isPrime = isPrimeNumber(n);

      if(isPrime == true)
        {

           arr[k]=n;

           k++;

        }
   }
   k=0;
 for(int n = 2; n < 1003; n++) {
      // isPrime will be true for prime numbers
      isPrime = isPrimeNumber(n);

      if(isPrime == true)
        {

           trr[k]=n;

           k++;

        }
   }
   int tt=0;
     for(int i=0;i<m;i++)
     {

           if(i==trr[i])
           {tt=tt+arr[i];
           }

     }


     cout << tt << endl;
     }

   return 0;
}

int isPrimeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }
   return isPrime;
}
