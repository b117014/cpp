#include<iostream>
#include<cmath>
using namespace std;

int fun1(int n,int bi,int ni,int by);
int fun2(int n,int bi,int ni,int by);
int fun3(int n,int bi,int ni,int by);

int main()
{
  int a;
  cin >> a;
  for(int k=0;k<a;k++)
    {
      int bi=0,ni=0,by=0;
      int n;
      cin >> n;
      if(n<=26){
     bi= fun1(n,bi,ni,by);
      ni=fun2(n,bi,ni,by);
      by=fun3(n,bi,ni,by);
        cout << bi << " " << ni << " " << by << endl;
      }

   if(n>26){
   int x=0;
   int i=0;
       while(n>26)
          {

             n=n/2;
              i=pow(2,(x+1));
             x++;
          }
          cout << i;

          for(int j=0;j<i;j++)
          {
          if(n<=2){
            bi=fun1(n,bi,ni,by);}
            else if(n>2 && n<=10){
            ni=fun2(n,bi,ni,by);}
            else if(n>10 && n<=26){
            by=fun3(n,bi,ni,by);}


          }
  cout << bi << " "<< ni << " " << by << endl;



}



    }
    return 0;
}

int fun1(int n,int bi,int ni,int by)
{

   if(n<=2)
   {
      bi=bi+1;


   }
   return bi;

}

int fun2(int n,int bi,int ni,int by)
{
     if(n>2 && n<=10)
     {

         ni=ni+1;
     }
     return ni;

}
int fun3(int n,int bi,int ni,int by)
{
   if(n>10 && n<=26)
   {
      by=by+1;
   }
 return by;
}



