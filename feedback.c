#include<stdio.h>
#include<string.h>

int main()
{
  int a;
  scanf("%d",&a);
  for(int k=0;k<a;k++)
  {
  char s[1000000];
  int ct=0;
  scanf("%s",s);
  int l=strlen(s);
  for(int i=0;i<l-3;i++)
     {

           if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' || s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
           {
             ct=1;
             break;
           }

     }

      if(ct==1)
      {
        printf("Good\n");
      }else{
        printf("Bad\n");
      }
  }
  return 0;

}
