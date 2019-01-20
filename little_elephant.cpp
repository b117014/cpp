#include<iostream>
using namespace std;

int main()
{
int k;
cin >> k;
for(int t=0;t<k;t++)
{
    int n,A[100];
    cin >> n;
    int ct1=0,ct2=0;
    for(int i=0;i<n;i++)
    {
      cin >> A[i];
    }

    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
          if(A[i]>A[j])
          {
            ct1++;
          }
       }

    }

    for(int i=0;i<n-1;i++)
    {
        if(A[i]>A[i+1])
        {
           ct2++;
        }
    }

    if(ct1==ct2)
    {
    cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }

}
return 0;
}
