#include<stdio.h>

void main()
{

 int a;
  scanf("%d",&a);
  for(int k=0;k<a;k++)
  {
    int ct=0;
    int n,arr[1000002];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {

          if(arr[arr[i]]==arr[arr[j]] && arr[i]!=arr[j] && i!=j)
          {
            ct++;
            break;
          }


      }
    }
   if(ct>0)
   {
       printf("Truly Happy\n");
          }
   else{
   printf("Poor Chef\n");

   }
  }

}
