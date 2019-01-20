#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 int a;
 cin >> a;
 for(int l=0;l<a;l++)
 {
     int n,k,arr[100],sum[100],last[100];
     for(int i=0;i<n;i++)
     {
       sum[i]=0;
     }

     cin >> n >> k;
     for(int i=0;i<n;i++)
     {
        cin >> arr[i];
        last[i]=arr[i];
     }
     int t=0,a=0,b=0;
     for(int i=0;i<n;i++)
     {
       for(int j=0;j<n;j++)
       {


            if(min(arr[i],arr[j])>k && i!=j)
            {
               a=arr[i];
               b=arr[j];
            while(min(a,b)>k){
              a=a-1;
              b=b-1;
            }
            last[i]=a;
            last[j]=b;
            for(int m=0;m<n;m++)
            {
              sum[t]=sum[t]+last[m];
            }
              t++;

            }


       }

     }
    sort(sum,sum+t);

   cout << sum[t-1] << endl;



     }


 return 0;
}
