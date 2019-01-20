#include<iostream>
using namespace std;

class Array
{
  protected:int *ptr;
            int n;
    public:
      Array(int *,int );
      int &operator[](int );
      void display() ;

};

Array :: Array(int *p=NULL,int s=0)
      {



         ptr=NULL;
         n=s;
         if(s!=0){
         ptr= new int[s];
           for(int j=0;j<s;j++)
           {
              ptr[j]=p[j];

           }
           }

      }
 int &Array::operator[](int i)
 {
    if (i >=n)
    {
       cout << "array index outof bound" <<endl;
       exit(0);
    }
    return ptr[i];

 }

 void Array::display()
 {
   for(int j=0;j<n;j++)
     {
       cout << ptr[j] <<" ";
     }
     cout << endl;

 }

 int main()
 {
   int a[]={3,5,6,7};
   Array ob(a,4);
   ob[2]=9;
   ob.display();
   ob[5]=20;
   return 0;

 }
