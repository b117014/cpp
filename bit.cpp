#include<iostream>
using namespace std;

void fun1(int n,int bi,int ni,int by);
void fun2(int n,int bi,int ni,int by);
void fun3(int n,int bi,int ni,int by);
void fun4(int n,int bi,int ni,int by);
int main()
{
  int a;
  cin >> a;
  for(int k=0;k<a;k++)
    {
      int bi=0,ni=0,by=0;
      int n;
      cin >> n;
      fun1(n,bi,ni,by);
      fun2(n,bi,ni,by);
      fun3(n,bi,ni,by);
      fun4(n,bi,ni,by);
      cout << bi << " " << ni << " " << by << endl;


    }
    return 0;
}

void fun1(int n,int bi,int ni,int by)
{

   if(n<=2)
   {
      bi=bi+1;


   }

}

void fun2(int n,int bi,int ni,int by)
{
     if(n>2 && n<=10)
     {

         ni=ni+1;
     }

}
void fun3(int n,int bi,int ni,int by)
{
   if(n>10 && n<=26)
   {
      by=by+1;
   }

}

void fun4(int n,int bi,int ni,int by)
 {


   if(n>26){
   int x=0;
   int i;
       while(n<=26)
          {

             n=n/2;
              i=2^(x+1);
             x++;
          }

          for(int j=0;j<i;j++)
          {
            fun1(n,bi,ni,by);
            fun2(n,bi,ni,by);
            fun3(n,bi,ni,by);


          }

   }

 }
