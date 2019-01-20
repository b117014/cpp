#include<iostream>
using namespace std;
void update(int *a,int *b)
{
     int temp1=*a;
     int temp2=*b;
     *a=temp1+temp2;
     *b=temp1-temp2;
     if(*b<0)
     {
       *b=-*b;
     }


}

int main()
{
   int a,b;
   int *pa=&a;
   int *pb=&b;
   cin >> *pa >> *pb;
   update(pa,pb);
   cout << a << " " << b << endl;
   return 0;

}
