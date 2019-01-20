#include<iostream>
using namespace std;
int main()
{
int n,q,a,i;
cin>>a>>n>>q;
for(i=0;i<q;i++)
{
int pra1 = a/(n+1);
int pra2 = a%(n+1);
cout<<pra2;
a = pra1;
}
return 0;
}
