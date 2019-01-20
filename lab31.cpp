#include<iostream>
using namespace std;

template <class T1>
 void as(T1 arr[],int n)
 {

   for(int i=0;i<n-1;i++)
     {

     for(int j=0;j<n-i-1; j++)
       {
         if(arr[j]>arr[j+1])
           {
             double x;
             x=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=x;

           }

       }
     }


 }



 int main()
 {
   double arr[100];
   int n;
   cout << "Enter size of array : " << endl;
   cin >> n;
   cout << "Enter element in array : " << endl;
   for(int i=0;i<n;i++)
   {
     cin >> arr[i];
   }

   as(arr,n);
   cout << "ascending order : " << endl;
   for(int i=0;i<n;i++)
   {
   cout << arr[i] << " " ;

   }
   return 0;

 }
