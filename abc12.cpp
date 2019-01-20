#include<iostream>
using namespace std;
int main()
{

  int a;
  cin >>a ;
  for(int k=0;k<a;k++)
  {
     int n;
     cin >> n;
     int ct=0;
     int arr[1000]={3, 5, 11, 17, 31, 41, 59, 67, 83, 109, 127, 157, 179, 191, 211, 241, 277, 283, 331, 353, 367, 401, 431, 461, 509, 547, 563, 587, 599, 617, 709, 739, 773, 797, 859, 877, 919, 967, 991};
     for(int i=0;i<n;i++)
     {
       ct=ct+arr[i];
     }
     cout << ct << endl;

  }
}
