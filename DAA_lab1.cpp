#include<iostream>
#include<cstring>
using namespace std;
int search_(int n);

int main()
{
   string str[20],temp;
   int n;
   cout << "enter no. of name" << endl;
   cin >> n;
   cout << "Enter name" << endl;
   for(int i=0;i<n;i++)
   {
     cin >> str[i];

   }

   for(int i=0;i<n-1;i++)
   {
     for(int j=0;j<n-i-1;j++)
     {
        if(str[j]>str[j+1])
        {
           temp=str[j+1];
           str[j+1]=str[j];
           str[j]=temp;
        }
     }
   }


  cout << "ascending order"<< endl;

   for(int i=0;i<n;i++)
   {
     cout << str[i] << endl;
   }


    string searc;
    cout << "enter name for search" << endl;
    cin >> searc;


   for(int i=0;i<n;i++)
   {
       if(str[i]==searc)
       {
         cout << "your location is : " << i+1 << endl;
         break;
       }

   }
   return 0;

}


