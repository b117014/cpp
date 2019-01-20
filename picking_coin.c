
#include<stdio.h>
#include<math.h>


int main()
{
 int t;
 scanf("%d",&t);
 for(int l=0;l<t;l++)
 {
   long int n,k;
   scanf("%d %d",&n,&k);
   int i=0;
   while(1)
     {
        i++;
          n=n-pow(k,i);

         if(n<pow(k,i) && n>0)
         {
          printf("Alice\n");
           break;
         }else if(n<0)
         {
           printf("Bob\n");
           break;
         }
         n=n-pow(k,i);
         if(n<pow(k,i) && n>0){
          printf("Bob\n");
          break;
         }else if(n<0){
           printf("Alice\n");
            break;
         }


     }

 }
return 0;
}

