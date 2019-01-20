#include<iostream>
using namespace std;

int main()
{
int k;
    cin >> k;
    for(int t=0;t<k;t++)
    {
    int n;
    int p;
    cin >> n >> p;
    int arr[1000000];
    int trr[1000000];
    for(int i=0;i<n;i++)
       {
          cin >> arr[i];
       }

       for(int i=0;i<n;i++)
       {
           int k=p-arr[i];

           if(k>=0)
           {
             trr[i]=1;
             p=p-arr[i];
           }
             else if(k<0)
             {
               trr[i]=0;
             }

       }
       for(int i=0;i<n;i++)
       {
         cout << trr[i];
       }
       cout << endl;
       }
       return 0;
}

